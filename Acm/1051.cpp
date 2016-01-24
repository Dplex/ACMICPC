#include <stdio.h>

char xx[51][51];
int n, m;

int judge(int x, int y, int k) {
	char val = xx[x][y];
	if (val != xx[x + k][y])
		return 0;
	if (val != xx[x][y + k])
		return 0;
	if (val != xx[x + k][y + k])
		return 0;
	return 1;
}

int main()
{
	scanf("%d %d ", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%s", xx[i]);
	int min = n;
	if (min > m)
		min = m;
	int max = 0;
	for (int res = min - 1; res >= 0; res--) {
		for (int i = 0; i < n - res; i++) {
			for (int j = 0; j < m - res; j++) {
				if (judge(i, j, res)) {
					printf("%d\n", (res + 1)*(res + 1));
					return 0;
				}
			}
		}
	}
}