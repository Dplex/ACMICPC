#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int val = 1;
	for (int i = 1; i <= n; i++) {
		val *= i;
		while (val%10==0)
		{
			val /= 10;
		}
		val %= 1000000;
	}
	printf("%d\n", val%10);
}