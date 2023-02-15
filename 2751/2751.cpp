#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int numCnt;
    vector<int> container;

    cin >> numCnt;
    container.reserve(numCnt);
    for (int i = 0; i < numCnt; ++i) {
        int num;
        cin >> num;
        container.push_back(num);
    }
    sort(container.begin(), container.end());
    for (int i: container) {
        cout << i << "\n";
    }
    return 0;
}
