#include <stdio.h>

int main()
{
	int sum = 1;
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		sum *= i;
	}
	printf("%d\n", sum);
}