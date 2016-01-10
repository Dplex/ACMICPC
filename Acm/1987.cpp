#include <stdio.h>
int r, c;
char data[21][21];
int visit[256];
int max = 0;

void algo(int _r, int _c, int lev) {
	if (visit[data[_r][_c]])
		return;
	if (_r == -1 || _r == r || _c == -1 || _c == c)
		return;
	visit[data[_r][_c]] = 1;

	if (lev + 1 > max)
		max = lev + 1;
	algo(_r + 1, _c, lev + 1);
	algo(_r - 1, _c, lev + 1);
	algo(_r, _c + 1, lev + 1);
	algo(_r, _c - 1, lev + 1);
	visit[data[_r][_c]] = 0;
}

int main()
{
	scanf("%d %d ", &r, &c);
	for (int i = 0; i < r; i++)
		scanf("%s", data[i]);
	algo(0, 0, 0);
	printf("%d\n", max);
}