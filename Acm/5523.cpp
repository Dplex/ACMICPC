#include <stdio.h>

int main()
{
	int a, b;
	int n;
	scanf("%d", &n);
	int as = 0, bs = 0;
	while (n--)
	{
		scanf("%d %d", &a, &b);
		if (a > b)
			as++;
		else if (a < b)
			bs++;
	}
	printf("%d %d", as, bs);
}