#include <stdio.h>
#include <stdlib.h>

static int pass_croatia(char **str)
{
    if ((**str == 'c' || **str == 's' || **str == 'z') && *(*str + 1) == '=')
    {
        (*str) += 2;
        return (1);
    }
    else if ((**str == 'c' || **str == 'd') && *(*str + 1) == '-')
    {
        (*str) += 2;
        return (1);
    }
    else if (**str == 'd' && *(*str + 1) == 'z' && *(*str + 2) == '=')
    {
        (*str) += 3;
        return (1);
    }
    else if ((**str == 'l' || **str == 'n') && *(*str + 1) == 'j')
    {
        (*str) += 2;
        return (1);
    }
    return (0);
}

int main(void)
{
    char    *str;
    char    *tmp;
    int     cnt = 0;

    str = (char *)malloc(101);
    if (str == NULL)
        return (0);
    tmp = str;
    scanf("%s", str);
    while (*str)
    {
        cnt++;
        if (pass_croatia(&str) == 0)
            str++;
    }
    free(tmp);
    printf("%d", cnt);
    return (0);
}