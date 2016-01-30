#include <stdio.h>

char x[2501];
char y[51];

int judge(char *xx, char *yy) {
	int idx = 0;
	while (yy[idx])
	{
		if (xx[idx] != yy[idx])
			return 0;
		idx++;
	}
	return 1;
}

int main()
{
	int len=0;
	gets(x);
	gets(y);
	while (y[++len]);
	len--;
	int cnt = 0;
	for (int i = 0; x[i]; i++) {
		if (judge(x + i, y)) {
			cnt++;
			i += len;
		}
	}
	printf("%d\n", cnt);
}