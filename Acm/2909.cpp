#include <stdio.h>

int data[10] = { 1, };

int main()
{
	for (int i = 1; i < 10; i++)
		data[i] = data[i - 1] * 10;
	int c, k;
	scanf("%d %d", &c, &k);
	if (!k) {
		printf("%d", c);
		return 0;
	}
	int mod = c % data[k];
	if (mod >= data[k - 1] * 5) {
		c += data[k - 1] * 5;
	}
	printf("%d", c / data[k] * data[k]);
}