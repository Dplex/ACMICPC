#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n / i; i++) {
		if (n%i == 0) {
			printf("%d", n - n / i);
			return 0;
		}
	}
	printf("%d\n", n-1);
}