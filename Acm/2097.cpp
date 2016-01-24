#include <stdio.h>

int main()
{
	int i;
	int n;
	scanf("%d", &n);
	if (n <= 4) {
		printf("4");
		return 0;
	}
	for (i = 1; i <= n / i; i++);
	i--;
	int b;
	if (n%i)
		b = n/i + 1;
	else
		b = n/i;
	printf("%d", (i + b - 2) * 2);
}