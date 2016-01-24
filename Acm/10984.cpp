#include <stdio.h>

int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int n;
		int sum = 0;
		double hak = 0;
		scanf("%d", &n);
		int a;
		double b;
		for (int i = 0; i < n; i++) {
			scanf("%d %lf", &a, &b);
			sum += a;
			hak += a*b;
		}
		printf("%d %.1f\n", sum, hak / (double)sum);
	}
}