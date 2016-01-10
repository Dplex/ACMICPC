#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}
int data[200000];
int n, m;
int isContain(int val) {
	int st = 0;
	int la = n;
	int mid;
	while (st<=la)
	{
		mid = (st + la) / 2;
		if (data[mid] == val)
			return 1;
		else if (data[mid] < val)
			st = mid + 1;
		else
			la = mid - 1;
	}
	return 0;
}

int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", data + i);
	qsort(data, n, 4, comp);
	int cnt = n;
	int val;
	for (int i = 0; i < m; i++) {
		scanf("%d", &val);
		if (isContain(val))
			cnt--;
		else
			cnt++;
	}
	printf("%d\n", cnt);
}