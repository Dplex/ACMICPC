#include <stdio.h>

int data[101];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", data + i);
	int sum = 0;
	for (int i = n - 2; i >= 0; i--) {
		if (data[i] >= data[i + 1]) {
			sum += data[i] - data[i + 1] + 1;
			data[i] = data[i + 1] - 1;
		}
	}
	printf("%d", sum);
}