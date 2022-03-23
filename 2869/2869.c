#include <stdio.h>

int main(void)
{
    int morning;
    int night;
    int pos;
    int dst;
    int day = 0;

    scanf("%d %d %d", &morning, &night, &dst);
    while (dst > morning)
    {
        pos = dst / morning;
        dst -= (morning - night) * pos;
        day += pos;
    }
    printf("%d", day + 1);
    return (0);
}