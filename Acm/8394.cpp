#include <stdio.h>

int main()
{
	int a[2];
	a[0] = 1;
	a[1] = 0;
	int n;
	scanf("%d", &n);
	int b0, b1;
	for (int i = 1; i <n; i++) {
		b0 = a[0] + a[1];
		b1 = a[0];
		a[0] = b0%10;
		a[1] = b1%10;
	}
	printf("%d", (a[0] + a[1]) % 10);
}