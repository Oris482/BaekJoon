#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *num_list;
    int num_cnt;
    int idx = 0;
    int min;
    int max;

    scanf("%d", &num_cnt);
    if ((num_cnt < 1) || (num_cnt > 1000000))
        return (0);
    num_list = (int *)malloc(sizeof(int) * num_cnt);
    if (num_list == NULL)
        return (0);
    while (idx < num_cnt)
        scanf("%d", &num_list[idx++]);
    min = num_list[0];
    max = num_list[0];
    while (num_cnt-- > 1)
    {
        if (num_list[num_cnt] < min)
            min = num_list[num_cnt];
        if (num_list[num_cnt] > max)
            max = num_list[num_cnt];
    }
    free (num_list);
    printf("%d %d", min, max);
    return (0);
}