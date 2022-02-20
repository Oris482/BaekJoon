#include <stdio.h>

int main(void)
{
	int num;
	int times = 0;

	scanf("%d", &num);
	if (num < 1 || num > 9)
		return (0);
	while (++times <= 9)
		printf("%d * %d = %d\n", num, times, (num * times));
	return (0);
}
