#include <stdio.h>

static int set_flag(char *dice_flag, int *dice)
{
    int     idx = -1;
    int     result;
    int     is_same_or_big = 0;
    int     times;
    int     max_dice = 0;

    *dice_flag = 0;
    while (++idx < 3)
    {
        times = 1;
        result = 1;
        if (max_dice < dice[idx])
            max_dice = dice[idx];
        while (times++ < dice[idx])
        {
            result *= 2;
        }
        if ((*dice_flag & result) != 0)
            is_same_or_big = dice[idx];
        else
            *dice_flag |= result;
    }
    if (is_same_or_big == 0)
        is_same_or_big = max_dice * (-1);
    return (is_same_or_big);
}

int main(void)
{
    int     dice[3];
    char    dice_flag;
    int     same_dice;
    int     count = 0;
    int     idx = -1;

    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);
    while (++idx < 3)
    {
        if (dice[idx] < 1 || dice[idx] > 6)
            return (0);
    }
    same_dice = set_flag(&dice_flag, dice);
    if (same_dice < 0)
    {
        printf("%d", (same_dice * 100 * (-1)));
        return (0);
    }
    idx = 1;
    while (idx++ <= 6)
    {
        if ((dice_flag & 1) == 1)
            count++;
        dice_flag >>= 1;   
    }
    if (count == 2)
        printf("%d", (same_dice * 100 + 1000));
    else
        printf("%d", (same_dice * 1000 + 10000));
    return (0);
}