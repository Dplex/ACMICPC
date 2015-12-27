#include <stdio.h>

int data[101][1001];

int main()
{
	int N, S, M;
	scanf("%d %d %d", &N, &S, &M);
	data[0][S] = 1;
	int k;
	for (int i = 1; i <= N; i++){
		scanf("%d", &k);
		for (int j = 0; j <= M; j++){
			if (j - k >= 0)
				data[i][j - k] += data[i - 1][j];
			if (j + k <= M)
				data[i][j + k] += data[i - 1][j];
		}
	}
	for (int i = M; i >= 0; i--){
		if (data[N][i]){
			printf("%d\n", i);
			return 0;
		}
	}
	printf("-1");
}