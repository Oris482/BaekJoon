#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int case_cnt;
    int student_cnt;
    int studnet_idx;
    float *score_list = NULL;
    float total_score;
    float avg_score;
    float over_avg_cnt;

    scanf("%d", &case_cnt);
    if (case_cnt < 1)
        return (0);
    while (case_cnt)
    {
        scanf("%d", &student_cnt);
        if ((student_cnt < 1) || (student_cnt > 1000))
            return (0);
        score_list = (float *)malloc(sizeof(float) * student_cnt);
        if (score_list == NULL)
            return (0);
        studnet_idx = 0;
        total_score = 0;
        over_avg_cnt = 0;
        while (studnet_idx < student_cnt)
        {
            scanf("%f", &score_list[studnet_idx]);
            if ((score_list[studnet_idx] < 0) || (score_list[studnet_idx] > 100))
            {
                free(score_list);
                return (0);
            }
            total_score += score_list[studnet_idx];
            studnet_idx++;
        }
        avg_score = (total_score / student_cnt);
        while (studnet_idx-- > 0)
        {
            if (score_list[studnet_idx] > avg_score)
                over_avg_cnt++;
        }
        printf("%.3f%%\n", (over_avg_cnt / student_cnt * 100));
        free(score_list);
        case_cnt--;
    }
    return (0);
}