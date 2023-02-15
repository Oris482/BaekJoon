#include <iostream>

using namespace std;

int main(void) {
    int progress, reduce, height;
    int oneDayProgress;
    int counter = 0;

    cin >> progress >> reduce >> height;
    oneDayProgress = progress - reduce;
    while (true) {
        if (height <= progress) break;
        counter += height / progress;
        height -= (height / progress) * oneDayProgress;
    }
    cout << ++counter << endl;
    return 0;
}
