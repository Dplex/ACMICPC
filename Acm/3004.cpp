#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a = n / 2, b = n - a;
	printf("%d", (a + 1)*(b + 1));
}