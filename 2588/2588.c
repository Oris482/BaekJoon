#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int result;

    scanf("%d", &num1);
    scanf("%d", &num2);
    result = num1 * num2;
    while (num2 > 0)
    {
        printf("%d\n", num1 * (num2 % 10));
        num2 /= 10;        
    }
    printf("%d", result);
    return (0);
}