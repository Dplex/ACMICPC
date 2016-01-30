#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	return *((int*)a) - *((int*)b);
}

int data[1000000][2];
int n;

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d %d", data[i], data[i] + 1);
	qsort(data, n, 8, comp);
	int min = data[0][0], max = data[0][1];
	long long sum = 0;
	for (int i = 1; i < n; i++) {
		if (data[i][0] > max) {
			sum += max - min;
			min = data[i][0];
			max = data[i][1];
		}
		else {
			if (data[i][1] > max)
				max = data[i][1];
		}
	}
	sum += max - min;
	printf("%lld", sum);
}