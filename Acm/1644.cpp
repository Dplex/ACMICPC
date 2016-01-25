#include <stdio.h>

char xx[1002][1002];
int posx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int posy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int get(int x, int y) {
	if (xx[x][y] >= '1' && xx[x][y] <= '9')
		return xx[x][y] - '0';
	return 0;
}

int main()
{
	int n;
	scanf("%d ", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", xx[i] + 1);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (xx[i][j] == '.') {
				int sum = 0;
				for (int k = 0; k < 8; k++)
					sum += get(i + posx[k], j + posy[k]);
				if (sum >= 10)
					printf("M");
				else
					printf("%d", sum);
			}
			else
				printf("*");
		}
		printf("\n");
	}
}