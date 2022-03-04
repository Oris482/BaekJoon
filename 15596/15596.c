#include <stdio.h>

long long sum(int *a, int n)
{
	long long	ans;
	int			idx;
	
	ans = 0;
	idx = 0;
	while (idx < n)
		ans += a[idx++];
	return (ans);
}
