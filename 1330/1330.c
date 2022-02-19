#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    scanf("%d %d", &num1, &num2);
    if ((0b10000000000000000000000000000000 & (num1 - num2)) == 0b10000000000000000000000000000000)
        printf("<");
    else
    {
        if ((num1 - num2) == 0)
            printf("==");
        else
            printf(">");
    }
    return (0);
}