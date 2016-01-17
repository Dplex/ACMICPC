#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	int *qa = (int*)a;
	int *qb = (int*)b;
	if (*qa > *qb)
		return 1;
	else if (*qa == *qb && qa[1] > qb[1])
		return 1;
	return 0;
}


int data[100005][2];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", data[i], data[i] + 1);

	qsort(data, n, 8, comp);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", data[i][0], data[i][1]);
}