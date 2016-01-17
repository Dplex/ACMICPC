#include <stdio.h>

int dp[1001];

int getzero(int i, int j) {
	int ret = 0;
	while (i)
	{
		if (i%j == 0)
			ret++;
		else
			break;
		i /= j;
	}
	return ret;
}

void init()
{
	for (int i = 2; i < 1001; i++) {
		int sum = 1;
		for (int j = 2; j < i; j++) {
			sum += getzero(i, j);
		}
		dp[i] = sum;
	}
}

int main()
{
	int tc;
	scanf("%d", &tc);
	init();
	while (tc--)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", dp[n]);
	}
}