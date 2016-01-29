#include <stdio.h>

int data[1001][1001];

int n, m;

int main()
{
	scanf("%d %d", &n, &m);
	int a, b, c;
	for (int i = 1; i < n; i++) {
		scanf("%d %d %d", &a, &b, &c);
		data[a][b] = c;
		data[b][a] = c;
	}
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", data[a][b]);
	}
}