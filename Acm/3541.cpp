#include <stdio.h>

int n, m;
int min = 1e9;

void algo(int a, int b) {
	int nn = n;
	int data[2001] = { 0, };
	int idx = 0;
	int cnt = 1;
	int pre=0, next=0;
	int mod = 0;
	while (nn > 0)
	{
		nn--;
		if (idx - a > 0) {
			if (data[idx - a]) {
				mod = cnt - data[idx - a];
				nn %= mod;
			}
			data[idx - a] = cnt++;
			idx -= a;
		}
		else {
			if (data[idx + b]) {
				mod = cnt - data[idx + b];
				nn %= mod;
			}
			data[idx + b] = cnt++;
			idx += b;
		}
		
	}
	if (idx == 0)
		idx = b + a;
	if (idx < min)
		min = idx;
}

int main()
{
	scanf("%d %d", &n, &m);
		int a, b;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		algo(b, a);
	}
	printf("%d\n", min);
}