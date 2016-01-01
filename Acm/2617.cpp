#include <stdio.h>

#define CNT 0
#define CNT2 101
int data[102][102];

int N, M;
void calc(int a, int b) {
	if (data[a][b])
		return;
	data[a][b] = 1;
	data[a][CNT]++;
	data[b][CNT2]++;
	for (int i = 1; i <= N; i++) {
		if (data[b][i] && data[a][i] == 0) {
			data[a][i] = 1;
			data[a][CNT]++;
			data[i][CNT2]++;
		}
	}
}

int main()
{
	int a, b;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		calc(a, b);
	}
	int flag = 1;
	while (flag)
	{
		flag = 0;
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				for (int k = 1; k <= N; k++) {
					if (data[i][j] && data[j][k] && data[i][k] == 0) {
						calc(i, k);
						flag = 1;
					}
				}

			
	}
	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (data[i][CNT] > N / 2 || data[i][CNT2] > N / 2)
			cnt++;
	}
	printf("%d\n", cnt);
}