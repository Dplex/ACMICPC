#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 666; n; i++) {
		int j;
		for (j = i; j&& j % 1000 != 666; j /= 10);
		if (j) n--;
		if (!n) {
			printf("%d\n", i);
			return 0;
		}
	}
}