#include <stdio.h>

int main()
{
	int n;
	int idx = 1;
	int a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a == idx)
			idx = b;
		else if (b == idx)
			idx = a;
	}
	printf("%d\n", idx);
}