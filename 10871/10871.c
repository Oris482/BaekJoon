#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num_count;
    int *num_list;
    int compare_point;
    int idx = 0;

    scanf("%d %d", &num_count, &compare_point);
    if (num_count < 1 || num_count > 10000 || compare_point < 1 || compare_point > 10000)
        return (0);
    num_list = (int *)malloc(sizeof(int) * num_count);
    if (num_list == NULL)
        return (0);
    while (idx < num_count)
        scanf("%d", &num_list[idx++]);
    idx = 0;
    while (idx < num_count)
    {
        if (num_list[idx] < compare_point)
            printf("%d ", num_list[idx]);
        idx++;
    }
    free (num_list);
    return (0);
}