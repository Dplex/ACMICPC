#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	n--;
	int sum = 5;
	int k = 3;
	while (n--)
	{
		sum += 4 + k;
		k += 3;
		sum %= 45678;
	}
	printf("%d\n", sum);
}