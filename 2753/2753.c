#include <stdio.h>

static int  end_print(char c)
{
    printf("%c", c);
    return (0);
}

int main(void)
{
    int year;

    scanf("%d", &year);
    if (year > 4000 || year < 1)
        return (0);
    if (year % 400 == 0)
        return (end_print('1'));
    else if ((year % 100 != 0) && (year % 4 == 0))
        return (end_print('1'));
    return (end_print('0'));
}