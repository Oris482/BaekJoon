#include <stdio.h>

int main(void)
{
    int hour;
    int min;
    int result;

    scanf("%d %d", &hour, &min);
    if (hour < 0 || hour > 23 || min < 0 || min > 59)
        return (0);
    result = (hour * 60) + min - 45;
    if (result < 0)
        result = (24 * 60) + result;
    printf("%d %d", (result / 60), (result % 60));
    return (0);
}