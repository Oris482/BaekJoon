#include <stdio.h>

int main(void)
{
    int max_num = -1;
    int cur_num;
    int idx = 0;
    int max_idx;

    while (idx < 9)
    {
        scanf("%d", &cur_num);
        if ((cur_num < 0) || (cur_num > 99))
            return (0);
        if (cur_num > max_num)
        {
            max_num = cur_num;
            max_idx = idx + 1;
        }
        idx++;
    }
    printf("%d\n%d", max_num, max_idx);
    return (0);
}