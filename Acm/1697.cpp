#include <stdio.h>

int queue[500001];
int visit[500001];

int main()
{
	int n, x;
	int st=0, la=0;
	scanf("%d %d", &n, &x);
	visit[n] = 1;
	queue[st++] = n;
	while (st!=la)
	{
		int idx = queue[la++];
		int val = visit[idx];
		if (idx * 2 < 200000 && !visit[idx * 2]) {
			visit[idx * 2] = val + 1;
			queue[st++] = idx * 2;
		}
		if (idx + 1 < 200000 && !visit[idx + 1]) {
			visit[idx + 1] = val + 1;
			queue[st++] = idx + 1;
		}
		if (idx - 1 >= 0 && !visit[idx - 1]) {
			visit[idx - 1] = val + 1;
			queue[st++] = idx - 1;
		}
	}
	printf("%d\n", visit[x] - 1);
}