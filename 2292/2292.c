#include <stdio.h>

int main(void)
{
    int input;
    int floor = 1;
    int end_num = 1;

    scanf("%d", &input);
    while (input > end_num)
    {
        floor++;
        end_num += (6 *(floor - 1));   
    }
    printf("%d", floor);
}