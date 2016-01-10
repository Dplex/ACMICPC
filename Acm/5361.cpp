#include <stdio.h>

double x[] = { 350.34, 230.90, 190.55, 125.30, 180.90 };

int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		double xx;
		double sum = 0;
		for (int i = 0; i < 5; i++) {
			scanf("%lf", &xx);
			sum += x[i] * xx;
		}
		printf("$%.2lf\n", sum);
	}
}