#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

unsigned int calc(const vector<int>& numVec) {
    unsigned int result = 0;

    for(vector<int>::size_type i = 0; i < numVec.size() - 1; ++i) {
        result += abs(numVec[i] - numVec[i + 1]);
    }
    return result;
}

int main(void) {
    unsigned int result = 0;
    int N, temp;
    vector<int> numVec;

    scanf("%d", &N);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &temp);
        numVec.push_back(temp);
    }
    sort(numVec.begin(), numVec.end());
    do {
        unsigned int curResult = calc(numVec);
        result = max(result, curResult);
    } while (next_permutation(numVec.begin(), numVec.end()));
    printf("%d\n", result);
    return 0;
}