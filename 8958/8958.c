#include <stdio.h>

int main(void)
{
    int case_cnt;
    char    question[80];
    int case_idx = 0;
    int str_idx;
    int cur_point;
    int score;

    scanf("%d", &case_cnt);
    if (case_cnt < 1)
        return (0);
    while (case_idx++ < case_cnt)
    {
        score = 0;
        cur_point = 1;
        scanf("%s", &question[0]);
        str_idx = 0;
        while (question[str_idx])
        {
            if (question[str_idx++] == 'O')
                score += cur_point++;
            else
                cur_point = 1;
        }
        printf("%d\n", score);
    }
    return (0);
}