#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			for (int k = j + 1; k < n; k++)
				for (int l = k + 1; l < n; l++)
					sum++;
	printf("%d\n", sum);
}