#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);
    printf("%0.9f", (double)num1 / (double)num2);
    return (0);
}