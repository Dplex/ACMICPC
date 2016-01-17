#include <stdio.h>

int data[60][60];
int remove1;
int cnt = 0;
void add(int k, int i) {
	data[k][++data[k][0]] = i;
}

void algo(int idx) {
	if (idx == remove1)
		return;
	if (!data[idx][0]) {
		cnt++;
		return;
	}
	for (int i = 1; i <= data[idx][0]; i++)
		algo(data[idx][i]);
}

int main()
{
	int n;
	scanf("%d", &n);
	int k;
	int root;
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		if (k == -1) {
			root = i;
		}
		else {
			add(k, i);
		}
	}
	scanf("%d", &remove1);
	algo(root);
	printf("%d\n", cnt);
}