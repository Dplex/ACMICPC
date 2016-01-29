#include <stdio.h>

char x[50];

int cnt = 0;

void algo(int idx, char *p) {
	if (idx > 34)
		return;
	if (!*p) {
		cnt++;
		return;
	}
	algo(idx * 10 + *p - '0', p + 1);
	algo(*p - '0', p + 1);
}

int main()
{
	scanf("%s", x);
	algo(x[0]-'0', x+1);
	printf("%d", cnt);
}