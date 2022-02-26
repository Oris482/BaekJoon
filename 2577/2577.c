#include <stdio.h>

/*
static void ft_bzero(void *list, int size)
{
    unsigned char   *ptr;

    ptr = (unsigned char *)list;
    while (size > 0)
    {
        *ptr = 0;
        ptr++;
        size--;
    }
}
*/

static void *num_to_char(char *num_char, int num)
{
    if (num < 10)
        *num_char = num + '0';
    else
    {
        num_to_char((num_char + 1), num / 10);
        num_to_char(num_char, num % 10);
    }
}

int main(void)
{
    int     cur_num;
    int     cal_num = 1;
    char    num_char[11] = {0, };
    int     digit_count[10] = {0, };
    int     idx = 0;

    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &cur_num);
        if ((cur_num < 100) | (cur_num > 1000))
            return (0);
        cal_num *= cur_num;
    }
    //ft_bzero(num_char, (11 * sizeof(num_char)));
    //ft_bzero(digit_count, (10 * sizeof(digit_count)));
    num_to_char(num_char, cal_num);
    while (num_char[idx])
    {
        digit_count[num_char[idx] - '0']++;
        idx++;
    }
    idx = 0;
    while (idx < 10)
        printf("%d\n", digit_count[idx++]);
    return (0);
}