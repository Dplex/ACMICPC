#include <stdio.h>

int rev[] = { 5, 3, 4, 1, 2, 0 };

int a[10005][6];

int max(int a, int b) {
	return a > b ? a : b;
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 6; j++)
			scanf("%d", a[i] + j);

	int result = 0;
	for (int i = 0; i < 6; i++) {
		int sum = 0;
		int bot = a[0][i];
		int up = a[0][rev[i]];
		for (int j = 0; j < n; j++) {
			int pick = 0;
			for (int k = 0; k < 6; k++) {
				if (a[j][k] != bot && a[j][k] != up)
					pick = max(pick, a[j][k]);
			}
			sum += pick;
			if (j == n - 1)
				break;
			bot = up;
			for (int k = 0; k < 6; k++)
				if (a[j + 1][k] == bot) {
					up = a[j + 1][rev[k]];
					break;
				}
		}
		result = max(result, sum);
	}
	printf("%d\n", result);
}