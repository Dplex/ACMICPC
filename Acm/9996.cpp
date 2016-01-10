#include <stdio.h>

char x[101];
char q[101];
int astrick, la;

void init()
{
	int len = 0;
	while (x[len++] != '*');
	astrick = len - 1;
	while (x[len++]);
	la = len - 1;
}

int judge() {
	for (int i = 0; i < astrick; i++)
		if (x[i] != q[i])
			return 0;
	int qlen = astrick;
	while (q[qlen++]);
	qlen--;
	for (int i = la; i > astrick; i--) {
		if (x[i] != q[qlen--])
			return 0;
	}
	if (qlen < astrick-1)
		return 0;
	return 1;
}

int main()
{
	int tc;
	scanf("%d ", &tc);
	scanf("%s ", x);
	init();
	while (tc--)
	{
		scanf("%s ", q);
		if (judge())
			printf("DA\n");
		else
			printf("NE\n");
	}
}