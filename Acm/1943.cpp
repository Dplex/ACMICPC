#include <stdio.h>
#include <string.h>

int data[500001];

int main()
{
	int tc = 3;
	while (tc--)
	{
		int n;
		scanf("%d", &n);
		int a, b;
		int sum = 0;
		memset(data, 0, sizeof(data));
		data[0] = 1;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &a, &b);
			sum += a*b;
			for (int j = 500000 - a; j >= 0; j--) {
				if (data[j]) {
					for (int k = 1; j + a*k <= 500000 && k <= b; k++)
						data[j + a*k] = 1;
				}
			}
		}
		if (sum % 2 == 0 && data[sum / 2])
			printf("1\n");
		else
			printf("0\n");
	}
}