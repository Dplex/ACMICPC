#include <stdio.h>

int data[1001][1001];
int queue[1005 * 1005][2];
int n;

int judge(int x, int y) {
	if (x < 0 || y < 0 || x >= n || y >= n || data[x][y])
		return 0;
	return 1;
}

int main()
{
	int posx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
	int posy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				data[i][j] = 0;
		int x, y;
		scanf("%d %d", &x, &y);
		int st = 0, la = 0;
		queue[st][0] = x;
		queue[st][1] = y;
		data[x][y] = 1;
		scanf("%d %d", &x, &y);
		st++;
		int tmpx, tmpy;
		int newx, newy;
		while (st != la)
		{
			tmpx = queue[la][0];
			tmpy = queue[la][1];
			if (tmpx == x && tmpy == y) {
				break;
			}
			for (int i = 0; i < 8; i++) {
				newx = tmpx + posx[i];
				newy = tmpy + posy[i];
				if (judge(newx, newy)) {
					queue[st][0] = newx;
					queue[st][1] = newy;
					data[newx][newy] = data[tmpx][tmpy] + 1;
					st++;
				}
			}
			la++;
		}
		printf("%d\n", data[x][y]-1);
	}
}