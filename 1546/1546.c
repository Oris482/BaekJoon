#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int subject_cnt;
    float *score_list;
    float total_sum = 0;
    float max_score = -1;
    int idx = 0;

    scanf("%d", &subject_cnt);
    if ((subject_cnt < 1) || (subject_cnt > 1000))
        return (0);
    score_list = (float *)malloc(sizeof(float) * (subject_cnt + 1));
    if (score_list == NULL)
        return (0);
    score_list[subject_cnt] = -1;
    while (idx < subject_cnt)
    {
        scanf("%f", &score_list[idx]);
        if ((score_list[idx] < 0) || (score_list[idx] > 100))
        {
            free (score_list);
            return (0);
        }
        total_sum += score_list[idx];
        if (max_score < score_list[idx])
            max_score = score_list[idx];
        idx++;
    }
    if (total_sum == 0)
    {
        free (score_list);
        return (0);
    }
    idx = 0;
    total_sum = 0;
    while (idx < subject_cnt)
    {
        score_list[idx] = (score_list[idx] / max_score) * 100;
        total_sum += score_list[idx];
        idx++;
    }
    printf("%f", (total_sum / subject_cnt));
    free (score_list);
    return (0);
}