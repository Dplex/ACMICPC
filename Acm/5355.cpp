#include <stdio.h>

int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		double x;
		char a;
		char b;
		scanf("%lf%c", &x, &a);
		while (~scanf("%c%c", &a, &b))
		{
			switch (a)
			{
			case '@':
				x *= 3;
				break;
			case '%':
				x += 5;
				break;
			case '#':
				x -= 7;
				break;
			default:
				break;
			}
			if (b == '\n')
				break;
		}
		printf("%.2lf\n", x);
	}
}