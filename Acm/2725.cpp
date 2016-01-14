#include <stdio.h>

int dp[1001];

int gcd(int a, int b) {
	if (!b)
		return a;
	return gcd(b, a%b);
}

void init()
{
	dp[1] = 3;
	for (int i = 2; i <= 1000; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (gcd(i, j) == 1)
				sum++;
			if (gcd(j, i) == 1)
				sum++;
		}
		dp[i] = dp[i - 1] + sum;
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