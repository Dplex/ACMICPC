#include <stdio.h>

char x[1001];
int len;

int judge(int idx) {
	int c = len;
	for (int i = idx; i < c; i++) {
		if (x[i] != x[c])
			return 0;
		c--;
	}
	return 1;
}

int main()
{
	scanf("%s", x);
	while (x[++len]);
	len--;
	for (int i = 0; i <= len; i++)
	{
		if (judge(i)) {
			printf("%d", len + i + 1);
			break;
		}
	}
}