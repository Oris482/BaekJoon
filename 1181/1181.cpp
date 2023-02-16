#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

struct Compare {
    bool operator() (const string& A, const string& B) const {
        if (A.length() == B.length()) return (A < B);

        return (A.length() < B.length());
    }
};

int main(void) {
    int N;
    set<string, Compare> sortingBox;

    cin >> N;
    for(int i = 0; i < N; ++i) {
        string temp;
        cin >> temp;
        sortingBox.insert(temp);
    }
    for(string word: sortingBox) {
        cout << word << "\n";
    }
    return 0;
}