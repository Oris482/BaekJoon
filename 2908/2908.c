#include <stdio.h>

int main(void)
{
    int origin_a;
    int origin_b;
    int sangsu_a = 0;
    int sangsu_b = 0;
    int cnt = 3;

    scanf("%d %d", &origin_a, &origin_b);
    while (cnt-- > 0)
    {
        sangsu_a = sangsu_a * 10 + (origin_a % 10);
        origin_a /= 10;
        sangsu_b = sangsu_b * 10 + (origin_b % 10);
        origin_b /= 10;
    }
    if (sangsu_a > sangsu_b)
        printf("%d", sangsu_a);
    else
        printf("%d", sangsu_b);
    return (0);
}