#include <stdio.h>

#define cnt 0
int data[1001][1001];

int main()
{
	int a, b;
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		if (!data[a][b]) {
			data[a][cnt]++;
			data[b][cnt]++;
			data[a][b] = 1;
			data[b][a] = 1;
		}
	}
	for (int i = 1; i <= n; i++)
		printf("%d\n", data[i][cnt]);
}