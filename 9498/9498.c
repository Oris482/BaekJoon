#include <stdio.h>

int main(void)
{
    int score;
    int grader;

    scanf("%d", &score);
    if (score > 100 || score < 0)
        return (0);
    if (score == 100)
    {
        printf("%c", 'A');
        return (0);
    }
    score -= 60;
    grader = 0;
    if (score < 0)
    {
        printf("%c", 'F');
        return (0);
    }
    while (score >= 0)
    {
        score -= 10;
        if (score < 0)
            printf("%c", ('D' - grader));
        grader++;
    }
    return (0);
}