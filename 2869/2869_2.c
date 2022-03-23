#include <stdio.h>

int main(void)
{
    int morning;
    int night;
    int dst;
    int day;

    scanf("%d %d %d", &morning, &night, &dst);
    day = ((dst - night) / (morning - night));
    if ((dst - night) % (morning - night) != 0)
        day++;
    printf("%d", day);
    return (0);
}