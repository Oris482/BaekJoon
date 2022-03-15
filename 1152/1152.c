#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char    *str;
    char    *tmp;
    int     word_cnt;

    str = (char *)malloc(1000001);
    if (str == NULL)
        return (0);
    scanf("%[^\n]s", str);
    tmp = str;
    word_cnt = 0;
    while (*str)
    {
        while (*str && *str == ' ')
            str++;
        if (*str)
            word_cnt++;
        while (*str && *str != ' ')
            str++;
    }
    free(tmp);
    printf("%d", word_cnt);
    return (0);
}