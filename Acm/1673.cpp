#include <stdio.h>

int main()
{
	int a, b;
	while (~scanf("%d %d", &a, &b))
	{
		int k = 0;
		int c;
		while (a>=b)
		{
			c = a / b;
			k += a / b * b;
			a %= b;
			a += c;
		}
		k += a;
		printf("%d\n", k);
	}
}