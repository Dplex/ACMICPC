#include <stdio.h>
#define MOD 10000000000
long long int data[20001][2001];
int main()
{
	int n;
	scanf("%d", &n);
	data[0][0] = 0; data[1][0] = 1;
	for (int i = 2; i <= n; i++) {
		data[i][0] = data[i - 1][0] + data[i - 2][0];
		for (int j = 1; j < 2000; j++) {
			data[i][j] = data[i - 1][j] + data[i - 2][j];
			data[i][j] += data[i][j - 1] / MOD;
			data[i][j - 1] %= MOD;
		}
	}

	
	if (n == 0) {
		printf("0");
		return 0;
	}
	int flag = 0;
	for (int i = 2000; i >= 0; i--) {
		if (flag) {
			printf("%010lld", data[n][i]);
		}
		else if (data[n][i]) {
			printf("%lld", data[n][i]);
			flag = 1;
		}
	}
}