#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
    int N;
    int temp;
    int numCnt[10001] = {0,};

    cin >> N;
    for(int i = 0; i < N; ++i) {
        scanf("%d", &temp);
        ++numCnt[temp];
    }
    for(int i = 1; i < 10001; ++i) {
        for (int j = 0; j < numCnt[i]; ++j) {
            printf("%d\n", i);
        }
    }
    return 0;
}