#include <iostream>
#include <string>

using namespace std;

bool vpsChecker(const char* str) {
    int checker = 0;
    while (*str) {
        if (*str == '(') ++checker;
        else --checker;
        if (checker < 0) return false;
        ++str;
    }
    if (checker == 0) return true;
    return false;
}

int main(void) {
    int N;
    string answer = "";

    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; ++i) {
        string vpsStr;

        getline(cin, vpsStr);
        if(vpsChecker(vpsStr.c_str())) answer.append("YES\n");
        else answer.append("NO\n");
    }
    cout << answer;
    return 0;
}