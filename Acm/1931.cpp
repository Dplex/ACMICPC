#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	if ((*(int(*)[2])a)[1] - (*(int(*)[2])b)[1] == 0)
		return - (*(int(*)[2])a)[0] + (*(int(*)[2])b)[0];
	return (*(int(*)[2])a)[1] - (*(int(*)[2])b)[1];
}
int data[100001][2];

int main()
{
	int N;
	scanf("%d", &N);
	int tmp;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", data[i], data[i] + 1);
		if (data[i][0] > data[i][1])
		{
			tmp = data[i][0];
			data[i][0] = data[i][1];
			data[i][1] = tmp;
		}
	}
	qsort(data, N, 8, comp);
	int cnt = 0;
	int start = 0;
	for (int i = 0; i < N; i++)
		if (start <= data[i][0]) {
			start = data[i][1];
			cnt++;
		}
	printf("%d", cnt);
}