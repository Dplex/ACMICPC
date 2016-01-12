#include <stdio.h>

int data[2187][2187];

int a, b, c;
int n;

int judge(int N, int x, int y) {
	int d = data[x][y];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (data[i + x][j + y] != d)
				return 0;
	return 1;
}

void algo(int N, int x, int y) {
	if (judge(N, x, y))
	{
		switch (data[x][y])
		{
		case -1:
			a++;
			break;
		case 0:
			b++;
			break;
		case 1:
			c++;
			break;
		}
		return;
	}
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			algo(N/3, x + i*N / 3, y + j*N / 3);
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", data[i] + j);
	algo(n, 0, 0);
	printf("%d\n%d\n%d", a, b, c);
}