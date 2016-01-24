#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	int k = 1;
	for (int i = 1; k<=b; i++) {
		for (int j = 0; j < i && k<=b; j++, k++) {
			if (k >= a)
				sum += i;
		}
	}
	printf("%d\n", sum);
}