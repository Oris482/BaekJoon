#include <stdio.h>

int main(void)
{
    int init_num;
    int prev_num;
    int new_num = -1;
    int count = 0;

    scanf("%d", &init_num);
    if (init_num < 0 || init_num > 99)
        return (0);
    prev_num = init_num;
    while (new_num != init_num)
    {
        new_num = ((prev_num % 10) * 10) + (((prev_num / 10) + (prev_num % 10)) % 10);
        count++;
        prev_num = new_num;
    }
    printf("%d", count);
    return (0);
}