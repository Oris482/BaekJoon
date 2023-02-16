#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int counter = 0;
    string::size_type i = 0;
    string str;

    getline(cin, str);
    while (i < str.length() && str[i] == ' ') {
        ++i;
    }
    while (i < str.length()) {
        if (str[i] != ' ') ++counter;
        else if (str[i] == ' ') { 
            ++i;
            continue ;
        }
        while (i < str.length() && str[i] != ' ') ++i;
    }
    cout << counter << "\n";
    return 0;
}