#include <stdio.h>

int main(void)
{
    int hour;
    int min;
    int require_min;
    int result;

    scanf("%d %d", &hour, &min);
    scanf("%d", &require_min);
    if (hour < 0 || hour > 23 || min < 0 || min > 59 || require_min < 0 || require_min > 1000)
        return (0);
    result = (hour * 60) + min + require_min;
    if (result >= (24 * 60))
        result -= (24 * 60);
    printf("%d %d", (result / 60), (result % 60));
    return (0);
}