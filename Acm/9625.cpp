#include <stdio.h>

int main()
{
	int dp[47];
	dp[0] = 0;
	dp[1] = dp[2] = 1;
	for (int i = 3; i < 47; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	int n;
	scanf("%d", &n);
	printf("%d %d", dp[n - 1], dp[n]);
}