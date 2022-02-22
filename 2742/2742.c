#include <stdio.h>

int main(void)
{
    int end_num;

    scanf("%d", &end_num);
    if (end_num < 0 || end_num > 100000)
        return (0);
    while (end_num > 0)
        printf("%d\n", end_num--);
    return (0);
}