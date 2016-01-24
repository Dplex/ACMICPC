#include <stdio.h>

int a[51];
int b[51];
int c[51];
int data[100000];

int judge(int val) {
	while (val)
	{
		if (val % 10 == 5 || val % 10 == 8)
			val /= 10;
		else
			return 0;
	}
	return 1;
}

int main()
{
	int tc;
	scanf("%d", &tc);
	int cnt = 0;
	while (tc--)
	{
		int sum = 0;
		cnt++;
		int an, bn, cn;
		scanf("%d", &an);
		for (int i = 0; i < an; i++)
			scanf("%d", a + i);
		scanf("%d", &bn);
		for (int i = 0; i < bn; i++)
			scanf("%d", b + i);
		scanf("%d", &cn);
		for (int i = 0; i < cn; i++)
			scanf("%d", c + i);
		for (int i = 0; i < an; i++)
			for (int j = 0; j < bn; j++)
				for (int k = 0; k < cn; k++) {
					int val = a[i] + b[j] + c[k];
					if (judge(val) && data[val] != cnt) {
						data[val] = cnt;
						sum++;
					}
				}
		printf("%d\n", sum);
	}
}
