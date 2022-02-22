#include <stdio.h>

int main(void)
{
    int end_num;

    scanf("%d", &end_num);
    if (end_num < 1 || end_num > 10000)
        return (0);
    printf("%d", (((1 + end_num) * end_num) / 2));
    return (0);
}