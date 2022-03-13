#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
    int		num_cnt;
    char	*str_num;
    int		ret = 0;

    scanf("%d", &num_cnt);
    if (num_cnt < 1 || num_cnt > 100)
    	return (0);
    str_num = (char *)malloc(num_cnt + 1);
    if (!str_num)
    	return (0);
    str_num[num_cnt] = '\0';
    scanf("%s", str_num);
    while (num_cnt-- > 0)
    {
        if (str_num[num_cnt] >= '0' && str_num[num_cnt] <= '9')
    		ret += (str_num[num_cnt] - '0');
        else
        {
            free(str_num);
        	return (0);
        }
    }
    printf("%d", ret);
    free(str_num);
    return (0);
}