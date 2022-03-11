#include <stdio.h>

static int  is_hansu(int num)
{
    int sep_list[11];
    int idx = 0;
    int interval;

    while (num)
    {
        sep_list[idx++] = num % 10;
        num /= 10;
    }
    sep_list[idx] = -1;
    interval = sep_list[0]  - sep_list[1];
    idx = 1;
    while (sep_list[idx + 1] != -1)
    {
        if ((sep_list[idx] - sep_list[idx + 1]) != interval)
            break;
        idx++;
    }
    if (sep_list[idx + 1] == -1)
        return (1);
    return (0);
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
            if (is_hansu(start))
                ret++;
        printf("%d", ret);
    }
    return (0);
}