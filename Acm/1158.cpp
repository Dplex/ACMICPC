#include <stdio.h>

int data[5001];

int main()
{
	int n, c;
	scanf("%d %d", &n, &c);
	for (int i = 0; i < n; i++)
		data[i] = i + 1;
	int pos = 0;
	printf("<");
	while (n!=1)
	{
		pos += c - 1;
		pos %= n;
		printf("%d, ", data[pos]);
		for (int i = pos; i < n-1; i++)
			data[i] = data[i + 1];
		n--;
	}
	printf("%d>", data[0]);
}