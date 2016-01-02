#include <stdio.h>

int data[1001][1001];

int visit[1001];
int N, M;

void DFS(int idx) {
	if (visit[idx])
		return;
	visit[idx] = 1;
	printf("%d ", idx);
	for (int i = 1; i <= N; i++) {
		if (data[idx][i])
			DFS(i);
	}
}
int queue[10001];

void BFS(int idx)
{
	int visit[1001] = { 0, };
	int st = 0, la = 0;
	queue[st++] = idx;
	visit[idx] = 1;
	while (st != la)
	{
		int idx = queue[la++];
		printf("%d ", idx);
		for (int i = 1; i <= N; i++) {
			if (data[idx][i] && !visit[i]) {
				queue[st++] = i;
				visit[i] = 1;
			}
		}
	}
}
int main()
{
	int k;
	scanf("%d %d %d", &N, &M, &k);
	int a, b;
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &a, &b);
		data[a][b] = 1;
	}
	DFS(k);
	printf("\n");
	BFS(k);
}