#include <stdio.h>

int data[1001];
int cnt;

void add(int val) {
	for (int i = 0; i < cnt; i++)
		if (data[i] >= val) {
			data[i] = val;
			return;
		}
	data[cnt++] = val;
}

int main()
{
	int n;
	scanf("%d", &n);
	int val;
	for (int i = 0; i < n; i++) {
		scanf("%d", &val);
		add(val);
	}
	printf("%d\n", cnt);
}
