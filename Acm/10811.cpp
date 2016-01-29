#include <stdio.h>

int data[101];

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++)
		data[i] = i;
	int c, d, e;
	while (b--)
	{
		scanf("%d %d", &c, &d);
		for (int i = c; i < d; i++) {
			e = data[i];
			data[i] = data[d];
			data[d] = e;
			d--;
		}
	}
	for (int i = 1; i <= a; i++)
		printf("%d ", data[i]);
}