#include <iostream>

using namespace std;

void factorial(int *result, int n) {
    if (n == 0 || n == 1) return ;

    *result *= n;
    factorial(result, n - 1);
}

int main(void) {
    int N;
    int result = 1;

    cin >> N;
    if (N > 1) factorial(&result, N);
    cout << result << "\n";
    return 0;
}