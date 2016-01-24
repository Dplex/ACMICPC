#include <stdio.h>

int get(int a, int b) {
	if (a < b)
		return b - a;
	return a - b;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int res = get(a, b);
	int n;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &a);
		if (res > get(a, b) + 1)
			res = get(a, b) + 1;
	}
	printf("%d", res);
}