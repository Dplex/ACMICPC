#include <stdio.h>

int data[101][101];
int x1[102];
int x2[102];
int n;

int cnt = 0;

int isRight(int idx, int sel) {
	if (sel == 1) {
		for (int i = 1; i <= x1[0]; i++)
			if (data[idx][x1[i]])
				return 0;
	}
	else if (sel == 2) {
		for (int i = 1; i <= x2[0]; i++)
			if (data[idx][x2[i]])
				return 0;
	}
	return 1;
}
int flag = 0;
void algo(int idx, int sel) {
	if (flag)
		return;
	if (!isRight(idx-1, sel)) {
		return;
	}
	if (idx == n+1)
	{
		flag = 1;
		printf("%d\n", x1[0]);
		for (int i = 1; i <= x1[0]; i++)
			printf("%d ", x1[i]);
		printf("\n%d\n", x2[0]);
		for (int i = 1; i <= x2[0]; i++)
			printf("%d ", x2[i]);
		return;
	}
	x1[++x1[0]] = idx;
	algo(idx + 1, 1);
	x1[x1[0]--] = idx;
	x2[++x2[0]] = idx;
	algo(idx + 1, 2);
	x2[x2[0]--] = idx;
}

int main()
{
	int k, a;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &k);
		for (int j = 0; j < k; j++) {
			scanf("%d", &a);
			data[i][a] = 1;
			data[a][i] = 1;
		}
	}
	algo(1, 1);
}