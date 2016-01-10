#include <stdio.h>

int dp[1000001];
int mod = 15746;

int main()
{
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= 1000000; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] %= mod;
	}
	int n;
	scanf("%d", &n);
	printf("%d\n", dp[n]);
}