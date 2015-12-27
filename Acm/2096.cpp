#include <stdio.h>

int max(int a, int b){
	return a > b ? a : b;
}
int min(int a, int b){
	return a < b ? a : b;
}

int main()
{
	int N;
	int dp[3][2] = { 0};
	int row[3];
	scanf("%d", &N);
	scanf("%d %d %d", dp[0], dp[1], dp[2]);
	dp[0][1] = dp[0][0]; dp[1][1] = dp[1][0]; dp[2][1] = dp[2][0];

	for (int i = 1; i < N; i++){
		scanf("%d %d %d", row, row + 1, row + 2);
		dp[0][0] = max(dp[0][0], dp[1][0]);
		dp[0][1] = min(dp[0][1], dp[1][1]);
		dp[2][0] = max(dp[1][0], dp[2][0]);
		dp[2][1] = min(dp[1][1], dp[2][1]);
		dp[1][0] = max(dp[0][0], dp[2][0]);
		dp[1][1] = min(dp[0][1], dp[2][1]);
		for (int j = 0; j < 3; j++)
		{
			dp[j][0] += row[j];
			dp[j][1] += row[j];
		}
	}
	printf("%d %d", max(dp[0][0], max(dp[1][0], dp[2][0])), min(dp[0][1], min(dp[1][1], dp[2][1])));

}