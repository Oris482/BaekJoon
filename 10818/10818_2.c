#include <stdio.h>

int main(void)
{
    int cur_num;
    int num_cnt;
    int min = 1000001;
    int max = -1000001;

    scanf("%d", &num_cnt);
    if ((num_cnt < 1) || (num_cnt > 1000000))
        return (0);
    while (num_cnt--)
    {
        scanf("%d", &cur_num);
        if ((cur_num < -1000000) || (cur_num > 1000000))
            return (0);
        if (cur_num < min)
            min = cur_num;
        if (cur_num > max)
            max = cur_num;
    }
    printf("%d %d", min, max);
    return (0);
}