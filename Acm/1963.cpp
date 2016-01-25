#include <stdio.h>
int queue[10000];

int isPrime(int idx) {
	if (idx < 1000 || (idx>2 && idx % 2 == 0))
		return 0;
	for (int i = 3; i <= idx / i; i++)
		if (idx % i == 0)
			return 0;
	return 1;
}

void algo(int a, int b) {
	int data[10001] = { 0, };
	data[a] = 1;
	int st = 0, la=0;
	int k;
	int q;
	int val;
	queue[st++] = a;
	while (st!=la)
	{
		a = queue[la++];
		if (a == b) {
			printf("%d\n", data[b] - 1);
			return;
		}
		for (int i = 1000; i > 0; i /= 10) {
			k = a / i % 10;
			q = a - k*i;
			for (int j = 0; j < 10; j++) {
				val = q + j*i;
				if (!data[val] && isPrime(val)) {
					queue[st++] = val;
					data[val] = data[a] + 1;
				}
			}
		}
	}
	printf("impossible\n");
}

int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		algo(a, b);
	}
}