#include <stdio.h>

int main()
{
	int n;
	int a, b, c, d, e;
	a = b = c = d = e = 0;
	scanf("%d", &n);
	int x, y;
	while (n--)
	{
		scanf("%d %d", &x, &y);
		if (x == 0 || y == 0)
			e++;
		else if (x > 0 && y > 0)
			a++;
		else if (x > 0 && y < 0)
			d++;
		else if (x < 0 && y > 0)
			b++;
		else
			c++;
	}
	printf("Q1: %d\n", a);
	printf("Q2: %d\n", b);
	printf("Q3: %d\n", c);
	printf("Q4: %d\n", d);
	printf("AXIS: %d\n", e);
}