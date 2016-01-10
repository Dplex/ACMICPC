#include <stdio.h>

int data[1001];

int main()
{
	int x = 0;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &x);
		for (int j = i; j <= n; j++) {
			data[j] = data[j - i] + x < data[j] ? data[j] : data[j - i] + x;
		}
	}
	printf("%d\n", data[n]);
}