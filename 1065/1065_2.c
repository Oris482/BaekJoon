#include <stdio.h>

static void  is_hansu(int num, int *ret)
{
    int sep_list[11];
    int idx = 0;
    int interval;

    while (idx <= 1)
    {
        sep_list[idx++] = num % 10;
        num /= 10;
    }
    interval = sep_list[1] - sep_list[0];
    while (num)
    {
        sep_list[idx] = num % 10;
        if ((sep_list[idx] - sep_list[idx - 1]) != interval)
            break;
        num /= 10;
        idx++;
    }
    if (!num)
        (*ret)++;
}

int main(void)
{
    int num;
    int ret;
    int start = 99;

    scanf("%d", &num);
    if (num < 1)
        return (0);
    else if (num < 100)
        printf("%d", num);
    else
    {
        ret = 99;
        while (start++ < num)
            is_hansu(start, &ret);
        printf("%d", ret);
    }
    return (0);
}