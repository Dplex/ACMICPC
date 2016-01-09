#include <stdio.h>

char data[7000][7000];
int n;

void fill(int x, int y, int size) {
	for (int i = x; i < x + size; i++)
		for (int j = y; j < y + size; j++)
			data[i][j] = data[i - x][j - y];
}

void algo(int n) {
	if (n <= 3) {
		data[0][0] = data[0][1] = data[0][2] = data[1][0] = data[1][2] = data[2][0] = data[2][1] = data[2][2] = '*';
		return;
	}
	algo(n / 3);
	fill(n / 3, 0, n / 3);
	fill(n / 3 * 2, 0, n / 3);
	fill(0, n / 3, n / 3);
	fill(n / 3 * 2, n / 3, n / 3);
	fill(0, n / 3 * 2, n / 3);
	fill(n / 3, n / 3 * 2, n / 3);
	fill(n / 3 * 2, n / 3 * 2, n / 3);
}

int main()
{
	scanf("%d", &n);
	algo(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (data[i][j])
				printf("%c", data[i][j]);
			else
				printf(" ");
		}
		printf("\n");
	}
}