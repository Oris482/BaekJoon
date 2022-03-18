#include <stdio.h>

int main(void)
{
    int fixed_cost;
    int var_cost;
    int price;

    scanf("%d %d %d", &fixed_cost, &var_cost, &price);
    if (price <= var_cost)
        printf("-1");
    else
        printf("%d", (fixed_cost / (price - var_cost) + 1));
    return (0);
}