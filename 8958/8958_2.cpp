#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calScore(const char* ox) {
    int value = 1;
    int result = 0;

    while (*ox) {
        if (*ox == 'O') {
            result += value;
            ++value;
        } else {
            value = 1;
        }
        ox++;
    }
    return result;
}

int main(void) {
    int caseNum;
    string answerSheet;

    cin >> caseNum;
    if (caseNum == 0) return 0;
    for (int i = 0; i < caseNum; ++i) {
        answerSheet.clear();
        cin >> answerSheet;
        cout << calScore(answerSheet.c_str()) << endl;
    }
    return 0;
}