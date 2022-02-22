#include <stdio.h>

int main(void)
{
    int cases;
    int num1;
    int num2;
    int idx = 1;

    scanf("%d", &cases);
    while (idx <= cases)
    {
        scanf("%d %d", &num1, &num2);
        if (num1 < 1 || num1 > 9 || num2 < 1 || num2 > 9)
            printf("INPUT ERROR\n");
        else
            printf("Case #%d: %d\n", idx, num1 + num2);
        idx++;
    }
    return (0);
}