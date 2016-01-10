#include <stdio.h>
#define SWAP(a, b) {int tmp = a; a = b; b = tmp;}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
		SWAP(a, b);
	if (b > c)
		SWAP(b, c);
	if (a > b)
		SWAP(a, b);

	if (b - a == c - b)
		printf("%d", c + b - a);
	else if (b - a > c - b)
		printf("%d", a + c - b);
	else
		printf("%d", b + b - a);
}