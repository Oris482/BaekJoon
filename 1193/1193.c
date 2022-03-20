#include <stdio.h>

int main(void)
{
    int idx;
    int floor = 0;
    int end_num = 0;

    scanf("%d", &idx);
    while (idx > end_num)
        end_num += ++floor;
    if (floor % 2 == 0)
        printf("%d/%d", (floor + idx - end_num), (1 - idx + end_num));
    else
        printf("%d/%d", (1 - idx + end_num), (floor + idx - end_num));
    return (0);   
}