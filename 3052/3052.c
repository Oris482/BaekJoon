#include <stdio.h>

int main(void)
{
    int diff_cnt = 0;
    int num_list[10];
    int cur_num;
    int idx = 0;

    while (idx < 10)
    {
        scanf("%d", &cur_num);
        num_list[idx++] = cur_num % 42;
    }
    for(int i = 0; i < 10; i++)
    {
        if (num_list[i] != -1)
        {
            diff_cnt++;
            for(int j = i + 1; j < 10; j++)
            {
                if (num_list[i] == num_list[j])
                    num_list[j] = -1;
            }
        }
    }
    printf("%d", diff_cnt);
    return (0);
}