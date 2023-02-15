#include <iostream>
#include <map>

using namespace std;

int main(void) {
    int numCnt;
    map<int, int> container;

    cin >> numCnt;
    for (int i = 0; i < numCnt; ++i) {
        int num;
        cin >> num;
        container.insert(make_pair(num, num));
    }
    for (pair<int, int> it: container) {
        cout << it.first << endl;
    }
    return 0;
}
