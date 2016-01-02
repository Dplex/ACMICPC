#include <stdio.h>

int main()
{
	int a[3][2];
	for (int i = 0; i < 3; i++)
		scanf("%d %d", a[i], a[i] + 1);
	for (int i = 0; i < 2; i++) {
		if (a[0][i] == a[1][i])
			printf("%d ", a[2][i]);
		else if (a[0][i] == a[2][i])
			printf("%d ", a[1][i]);
		else
			printf("%d ", a[0][i]);
	}

}