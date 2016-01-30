#include <stdio.h>
#include <string.h>

struct node {
	char data[51];
	int cnt;
}mynode[200];

int nodecnt = 0;

void add(char *p) {
	int val = 1;
	int len = strlen(p);
	for (int i = 0; i < len; i++) {
		if (p[i] > val) {
			for (int j = len -1; j >= i; j--) {
				if (p[i] == p[j])
					p[j] = val;
			}
			val++;
		}
	}
	for (int i = 0; i < nodecnt; i++) {
		if (!strcmp(p, mynode[i].data))
		{
			mynode[i].cnt++;
			return;
		}
	}
	strcpy(mynode[nodecnt].data, p);
	mynode[nodecnt].cnt = 1;
	nodecnt++;
}

int main()
{
	int n;
	scanf("%d ", &n);
	char x[51];
	while (n--)
	{
		scanf("%s ", x);
		add(x);
	}
	int sum = 0;
	for (int i = 0; i < nodecnt; i++) {
		sum += (mynode[i].cnt * (mynode[i].cnt - 1)) / 2;
	}
	printf("%d", sum);
}