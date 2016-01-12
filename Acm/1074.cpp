#include <stdio.h>
int n, r, c;
int flag;
void algo(int N, int x, int y, int *k) {
	if (flag) 
		return;
	if (N == 2) {
		if (x <= r && x + 1 >= r && y <= c && y + 1 >= c) {
			printf("%d\n", *k + (r - x) * 2 + (c - y));
			flag = 1;
		}
		return;
	}
	if (x + N / 2 > r && y + N / 2 > c)
		algo(N / 2, x, y, k);
	else
		*k = *k + (N*N) / 4;
	
	if (x + N / 2 > r)
		algo(N / 2, x, y + N / 2, k);
	else
		*k = *k + (N*N) / 4;
	
	if (y + N / 2 > c)
		algo(N / 2, x + N / 2, y, k);
	else
		*k = *k + (N*N) / 4;

	algo(N / 2, x + N / 2, y + N / 2, k);
}

int main()
{
	while (~scanf("%d %d %d", &n, &r, &c)) {
		flag = 0;
		int k = 0;
		int N = 1;
		while (n--) N *= 2;
		algo(N, 0, 0, &k);
	}
}