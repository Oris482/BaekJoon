#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int height;
    vector<int> heightVec;
    vector<int> subPermutation{0, 0, 1, 1, 1, 1, 1, 1, 1};

    heightVec.reserve(9);
    for(int i = 0; i < 9; ++i) {
        cin >> height;
        heightVec.push_back(height);
    }
    sort(heightVec.begin(), heightVec.end());
    do {
        int sum = 0;
        for(int i = 0; i < 9; ++i) {
            if (subPermutation[i] != 0) {
                sum += heightVec[i];
            }
        }
        if (sum == 100) {
            for(int i = 0; i < 9; ++i) {
                if (subPermutation[i] != 0) {
                    cout << heightVec[i] << "\n";
                }
            }
            return 0;
        }
    } while(next_permutation(subPermutation.begin(), subPermutation.end()));
    return 0;
}