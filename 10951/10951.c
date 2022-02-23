#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    while (scanf("%d %d", &num1, &num2) != EOF)
    {
        if (num1 < 1 || num1 > 9 || num2 < 1 || num2 > 9)
            return (0);
        printf("%d\n", num1 + num2);
    }
    return (0);
}