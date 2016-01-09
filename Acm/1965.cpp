#include <stdio.h>

int data[1000];
int cnt = 0;

void add(int val) {
	for (int i = 0; i < cnt; i++) {
		if (data[i] >= val) {
			data[i] = val;
			return;
		}
	}
	data[cnt++] = val;
}

int main()
{
	int n;
	scanf("%d", &n);
	int k;
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		add(k);
	}
	printf("%d\n", cnt);
}