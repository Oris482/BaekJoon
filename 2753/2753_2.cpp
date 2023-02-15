#include <iostream>
#include <unistd.h>

using namespace std;

int main(void) {
    int year;
    int answer;

    cin >> year;
    if (year % 4 != 0) answer = 0;
    else {
        if (year % 400 == 0) answer = 1;
        else if (year % 100 != 0) answer = 1;
        else answer = 0;
    }
    cout << answer << endl;
    return 0;
}