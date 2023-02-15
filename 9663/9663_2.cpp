#include <iostream>

using namespace std;

bool check_queen(int x, int y, int comb[]) {
    int prev_x = 0;

    while (prev_x < x) {
        int dist_x = x - prev_x;
        int dist_y;
        if (y >= comb[prev_x]) dist_y = y - comb[prev_x];
        else dist_y = comb[prev_x] - y;

        if (y == comb[prev_x] || dist_x == dist_y) return false;
        ++prev_x;
    }
    return true;
}

void place_queen(int x, int comb[], int *counter, int N) {
    if (x == N) {
        ++(*counter);
        return ;
    }

    int y = 0;

    while (y < N) {
        if (check_queen(x, y, comb)) {
            comb[x] = y;
            place_queen(x + 1, comb, counter, N);
        }
        ++y;
    }
}

int main(void) {
    int N;
    int counter = 0;
    int comb[14];

    cin >> N;
    if (N <= 0 || N > 15) return 0;
    place_queen(0, comb, &counter, N);
    cout << counter << endl;
    return 0;
}