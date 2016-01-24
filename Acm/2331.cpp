#include <stdio.h>

int data[10000001];

int get(int a, int b) {
	int sum = 0;
	int k;
	int c;
	while (a)
	{
		k = a % 10;
		c = 1;
		for (int i = 0; i < b; i++) {
			c *= k;
		}
		sum += c;
		a /= 10;
	}
	return sum;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int cnt = 1;
	data[a] = cnt++;
	while (1)
	{
		a = get(a, b);
		if (data[a]) {
			printf("%d", data[a] - 1);
			break;
		}
		data[a] = cnt++;
	}
}