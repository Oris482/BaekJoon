#include <iostream>

using namespace std;

int main(void) {
    int numCnt;
    int counter = 0;

    cin >> numCnt;
    for(int i = 0; i < numCnt; ++i) {
        int num;
        int checker = 2;

        cin >> num;
        if (num == 1) continue;
        if (num < 4) {
            ++counter;
            continue;
        }
        while (num >= checker * checker) {
            if (num % checker == 0) {
                break ;
            }
            ++checker;
        }
        if (num % checker != 0) ++counter;
    }
    cout << counter << "\n";
    return 0;
}