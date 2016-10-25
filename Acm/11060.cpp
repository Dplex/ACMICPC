#include <stdio.h>

int data[1001];
int result[1001];

int main()
{
	int n;
	scanf("%d", &n);
	result[0] = 1;
	if (n == 1)
	{
		printf("%d\n", 0);
		return 0;
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", data + i);
		if (result[i]) {
			for (int j = 1; j <= data[i] && i + j <= n; j++) {
				if (result[i + j] == 0 || result[i + j] > result[i] + 1) {
					result[i + j] = result[i] + 1;
				}
			}
		}
	}
	printf("%d\n", result[n - 1] - 1);
}