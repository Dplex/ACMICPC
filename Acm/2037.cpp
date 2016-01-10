#include <stdio.h>

char X[9][5] = { " ", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

int main()
{
	int p, w;
	scanf("%d %d ", &p, &w);
	char x;
	int sum = 0;
	int sel = -1;
	while (~scanf("%c", &x)) {
			for (int j = 0; j < 9; j++) {
				for (int k = 0; X[j][k]; k++) {
					if (x == X[j][k]) {
						sum += (k + 1)*p;
						if (sel == j && j != 0) {
							sum += w;
						}
						sel = j;
						goto here;
					}
				}
			}
		here:;
	}
	printf("%d\n", sum);
}