#include <stdio.h>
#include <stdlib.h>

static void repeat_print(int c, int times)
{
    while (times-- > 0)
    	printf("%c", c);
}

int	main(void)
{
    int		case_cnt;
    char	*str;
    int		idx;
    int		repeat;

    scanf("%d", &case_cnt);
    str = (char *)malloc(23);
    if (str == NULL)
    	return (0);
    while (case_cnt-- > 0)
    {
        scanf("%d", &repeat);
        scanf("%s", str);
        idx = 0;
        while (str[idx])
        {
            repeat_print(str[idx], repeat);
            idx++;
        }
        printf("\n");
    }
    return (0);
}