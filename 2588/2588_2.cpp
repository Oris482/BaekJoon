#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main(void) {
    int first;
    string second;
    int result = 0;

    cin >> first;
    cin >> second;
    for(string::size_type i = 0; i < second.length(); ++i) {
        const char c = second[second.length() - i - 1];
        int middleValue = first * static_cast<int>(c - '0');
        cout << middleValue << "\n";
        result += (middleValue * pow(10, i));
    }
    cout << result << "\n";
    return 0;
}