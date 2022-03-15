#include <stdio.h>

#define SEVEN "S"
#define EIGHT "TUV"
#define NINE "WXYZ"

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

int main(void)
{
    char    phone_num[16];
    int     req_time = 0;
    int     idx = 0;
    int     alpha_idx;

    scanf("%s", phone_num);
    while (phone_num[idx])
    {
        alpha_idx = phone_num[idx] - 'A';
        if (alpha_idx / 3 <= 5)
            req_time += ((alpha_idx / 3) + 2) + 1;
        else
        {
            if (ft_nstrchr(SEVEN, phone_num[idx]) != -1)
                req_time += 7 + 1;
            else if (ft_nstrchr(EIGHT, phone_num[idx]) != -1)
                req_time += 8 + 1;
            else if (ft_nstrchr(NINE, phone_num[idx]) != -1)
                req_time += 9 + 1;
        }
        idx++;
    }
    printf("%d", req_time);
    return (0);
}