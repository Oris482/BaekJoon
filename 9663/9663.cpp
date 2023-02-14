#include <iostream>

bool    check_queen(int x, int y, int *comb)
{
	int	prev;
	int	dist;

	prev = 0;
	while (prev < x) {
		if (y >= comb[prev])
			dist = y - comb[prev];
		else
			dist = comb[prev] - y;
		if (y == comb[prev] || dist == x - prev)
			return false;
		prev++;
	}
	return true;
}

void	place_queen(int x, int *comb, int *total, int N)
{
	int	y;

	y = 0;
	if (x == N) {
        (*total)++;
        return ;
    }
    
    while (y < N) {
        if (check_queen(x, y, comb)){
            comb[x] = y;
            place_queen(x + 1, comb, total, N);
        }
        y++;
    }
}

int	main(void)
{	
    int	comb[14];
    int N;
	int	x = 0;
	int	total = 0;

    std::cin >> N;
	place_queen(x, comb, &total, N);
    std::cout << total << std::endl;	
	return (0);
}