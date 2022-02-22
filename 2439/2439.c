#include <stdio.h>

int main(void)
{
    int lines;
    int cur_line = 1;
    int star_num;
    int space_num;

    scanf("%d", &lines);
    if (lines < 1 || lines > 100)
        return (0);
    while (cur_line <= lines)
    {
        star_num = 0;
        space_num = 0;
        while (space_num++ < (lines - cur_line))
            printf(" ");
        while (star_num++ < cur_line)
            printf("*");
        printf("\n");
        cur_line++;
    }
    return (0);
}