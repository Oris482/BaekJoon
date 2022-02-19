#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    printf("%d\n%d\n%d\n%d", (num1 + num2) % num3, ((num1 % num3) + (num2 % num3)) % num3, (num1 * num2) % num3, ((num1 % num3) * (num2 % num3)) % num3);
    return (0);
}