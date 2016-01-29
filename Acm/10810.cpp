#include <stdio.h>
int data[101];
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c, d, e;
	while (b--)
	{
		scanf("%d %d %d", &c, &d, &e);
		for (int i = c; i <= d; i++) {
			data[i] = e;
		}
	}
	for (int i = 1; i <= a; i++)
		printf("%d ", data[i]);
}