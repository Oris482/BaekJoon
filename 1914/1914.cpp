#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int counter = 0;

void stringMinusNum(string& originValue, int subtractValue, int pos) {
    if (originValue[pos] != '0') {
        originValue[pos] -= 1;
        return ;
    }

    originValue[pos] = '9';
    stringMinusNum(originValue, 1, pos - 1);
}

void recursive(int origin, int dest, int size) {
    const int subPlate = 3 - origin - dest;

    if (size == 1) {
        ++counter;
        cout << origin + 1 << " " << dest + 1<< "\n";
        return ;
    }
    recursive(origin, subPlate, size - 1);
    recursive(origin, dest, 1);
    recursive(subPlate, dest, size - 1);
}

int main(void) {
    int N;
    string count;

    cin >> N;
    count = to_string(pow(2, N));
    count.erase(count.find('.'), string::npos);
    stringMinusNum(count, 1, count.length() - 1);
    cout << count << "\n";
    if (N <= 20) recursive(0, 2, N);
    return 0;
}