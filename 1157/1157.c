#include <stdio.h>
#include <stdlib.h>

#define UPPER_CASE "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

static int  ft_strlen(char *str)
{
    int len;

    len = 0;
    while (*str)
    {
        len++;
        str++;
    }
    return (len);
}

static int  ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
        return (1);
    return (0);
}

static int  ft_nstrchr(const char *src, int c)
{
    int idx;

    idx = 0;
    while(*src)
    {
        if (c == *src)
            return (idx);
        idx++;
        src++;
    }
    return (-1);
}

static void alpha_count(char *upper_str, int *alpha_cnt)
{
    while (*upper_str)
    {
        if (ft_isalpha(*upper_str))
            alpha_cnt[ft_nstrchr(UPPER_CASE, *upper_str)]++;
        upper_str++;
    }
}

static int  find_maxalpha(int *alpha_cnt)
{
    int max;
    int idx;
    int max_idx;

    max = 0;
    idx = 0;
    while (idx < 26)
    {
        if (max <= alpha_cnt[idx])
        {
            max = alpha_cnt[idx];
            max_idx = idx;
        }
        idx++;
    }
    idx = 0;
    while (idx < 26)
    {
        if (idx == max_idx)
            ;
        else if (alpha_cnt[idx] == max)
            return (-1);
        idx++;
    }
    return (max_idx);
}

int main(void)
{
    int alpha_cnt[26] = {0, };
    char    *str;
    int     len;
    int     idx;
    char    *upper_str;

    str = (char *)malloc(1000001);
    if (str == NULL)
        return (0);
    scanf("%s", str);
    len = ft_strlen(str);
    upper_str = (char *)malloc(len + 1);
    if (upper_str == NULL)
        return (0);
    upper_str[len] = '\0';
    idx = 0;
    while (idx < len)
    {
        if (str[idx] >= 'a' && str[idx] <= 'z')
            upper_str[idx] = str[idx] - 32;
        else
            upper_str[idx] = str[idx];
        idx++;
    }
    free(str);
    alpha_count(upper_str, alpha_cnt);
    free(upper_str);
    idx = find_maxalpha(alpha_cnt);
    if (idx == -1)
        printf("?");
    else
        printf("%c", UPPER_CASE[idx]);
    return (0);
}