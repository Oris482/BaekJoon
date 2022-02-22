#include <stdio.h>

int main(void)
{
    int cases;
    int num1;
    int num2;

    scanf("%d", &cases);
    if (cases < 0 || cases > 1000000)
        return (0);
    while (cases-- > 0)
    {
        scanf("%d %d", &num1, &num2);
        if (num1 < 1 || num1 > 1000 || num2 < 1 || num2 > 1000)
            printf("INPUT ERROR\n");
        else
            printf("%d\n", num1 + num2);
    }
    return (0);
}