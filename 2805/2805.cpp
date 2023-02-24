#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
// 1 2 3 4 5
int height = 0;
int treeArr[1000000] = {0,};

void findHeight(int start, int end, const int N, const int M) {
    int targetHeight = (start + end) / 2;
    unsigned long long  cuttedTreeLen = 0;

    for (int i = 0; i < N; ++i) {
        if (treeArr[i] <= targetHeight) continue;
        cuttedTreeLen += treeArr[i] - targetHeight;
    }
    if (cuttedTreeLen >= M) {
        if (height < targetHeight) height = targetHeight;
        if (start == end) return;
        findHeight(targetHeight + 1, end, N, M);
    } else {
        if (start > targetHeight - 1) return;
        findHeight(start, targetHeight - 1, N, M);
    }
}

int main(void) {
    int N, M;

    cin >> N >> M;
    cin.ignore();
    for(int i = 0; i < N; ++i) {
        scanf("%d", &treeArr[i]);
    }
    findHeight(0, *max_element(treeArr, treeArr + N), N, M);
    cout << height << "\n";
    return 0;
}