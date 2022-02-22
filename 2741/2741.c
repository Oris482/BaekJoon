#include <stdio.h>

int main(void)
{
    int end_num;

    scanf("%d", &end_num);
    if (end_num < 0 || end_num > 100000)
        return (0);
    for (int i = 1; i <= end_num; i++)
        printf("%d\n", i);
    return (0);
}