#include <stdio.h>

int main()
{
	int n;
	int max = 1e9;
	int min = 1e9;
	scanf("%d", &n);
	int a;
	int res = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a <= max) {
			if (res < max - min)
				res = max - min;
			min = a;
			max = a;
		}
		else {
			max = a;
		}
	}
	if (res < max - min)
		res = max - min;
	printf("%d\n", res);
}