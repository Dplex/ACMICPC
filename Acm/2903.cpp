#include <stdio.h>

int main()
{
	int data[16];
	data[0] = 2;
	for (int i = 1; i < 16; i++)
		data[i] = data[i - 1] + data[i - 1] - 1;
	int n;
	scanf("%d", &n);
	printf("%d", data[n] * data[n]);
}