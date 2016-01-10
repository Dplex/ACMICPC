#include <stdio.h>

int main()
{
	long long int sum = 0;
	int d;
	char c;
	while (~scanf("%d%c", &d, &c))
	{
		sum += d;
	}
	printf("%lld\n", sum);
}