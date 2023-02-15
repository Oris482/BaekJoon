#include <iostream>
#include <sstream>
#include <string>
#include <deque>
#include <numeric>
#include <stdlib.h>

using namespace std;

int main(void) {
    int caseNum;
    deque<float> answer;

    cin >> caseNum;
    for(int i = 0; i < caseNum; ++i) {
        string classDataStr;
        deque<int> classDataDeq;
        int studentNum;
        int outstandingNum = 0;
        float average;

        cin >> studentNum;
        for(int j = 0; j < studentNum; ++j) {
            int score;
            cin >> score;
            classDataDeq.push_back(score);
        }
        average = accumulate(classDataDeq.begin(), classDataDeq.end(), 0) / studentNum;
        for (deque<int>::iterator it = classDataDeq.begin(); it != classDataDeq.end(); ++it) {
            if (*it > average) ++ outstandingNum;
        }
        answer.push_back(static_cast<float>(outstandingNum) * 100.0 / static_cast<float>(studentNum));
    }
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(3);
    while (!answer.empty()) {
        cout << answer.front() << "%" << endl;
        answer.pop_front();
    }

    return 0;
}