#include <stdio.h>

using namespace std;

int main(void) {
    int N, X, temp;

    scanf("%d %d", &N, &X);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &temp);
        if (temp < X) {
            // if (i != 0) cout << " ";
            // cout << temp;
            printf("%d ", temp);
        }
    }
    return 0;
}