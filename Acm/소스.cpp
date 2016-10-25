#include <stdio.h>
#include <stdlib.h>
int data[505][505];
int result[505][505];

struct MyStruct
{
	int x;
	int y;
	int val;
}st[505*505];

int comp(const void *a, const void *b) {
	MyStruct *aa = (MyStruct*)a;
	MyStruct *bb = (MyStruct*)b;
	return aa->val - bb->val;
}

int main()
{
	int n;
	scanf("%d", &n);
	int cnt = 0;
	for(int i=1; i<=n; i++)
		for (int j = 1; j <= n; j++) {
			scanf("%d", data[i] + j);
			st[cnt].x = i;
			st[cnt].y = j;
			st[cnt].val = data[i][j];
			cnt++;
		}
	qsort(st, cnt, sizeof(MyStruct), comp);
	int max = 0;
	int printVal = 0;
	for (int i = 0; i < cnt; i++) {
		int x = st[i].x;
		int y = st[i].y;
		int val = st[i].val;
		max = 0;
		if (val > data[x - 1][y] && max < result[x - 1][y])
			max = result[x - 1][y];
		if (val > data[x + 1][y] && max < result[x + 1][y])
			max = result[x + 1][y];
		if (val > data[x][y - 1] && max < result[x][y - 1])
			max = result[x][y - 1];
		if (val > data[x][y + 1] && max < result[x][y + 1])
			max = result[x][y + 1];
		result[x][y] = max + 1;
		if (max + 1 > printVal)
			printVal = max + 1;
	}
	printf("%d\n", printVal);
}