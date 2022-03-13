#include <stdio.h>

static int	ft_nstrchr(char *str, int c)
{
    int	idx = 0;

    while (*str)
    {
        if (*str == c)
        	return (idx);
        str++;
        idx++;
    }
    return (-1);
}

int	main(void)
{
    char	str[101] = {0, };
    char	c = 'a';

    scanf("%s", str);
    while (c <= 'z')
    {
        printf("%d", ft_nstrchr(&str[0], c));
        c++;
        if (c <= 'z')
        	printf(" ");
    }
    return (0);
}