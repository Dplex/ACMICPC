#include <stdio.h>
char x[500];
int main()
{
	long long int a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	sprintf(x, "%lld%lld %lld%lld", a, b, c, d);
	sscanf(x, "%lld %lld", &a, &b);
	printf("%lld", a + b);
}