#include <stdio.h>

int main()
{
	char *p[2] = { "CY", "SK" };
	int n;
	scanf("%d", &n);
	printf("%s\n", p[n % 2]);
}