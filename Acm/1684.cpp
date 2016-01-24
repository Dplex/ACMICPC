#include <stdio.h>

int data[1001];

int gcd(int a, int b) {
	if (!b)
		return a;
	gcd(b, a%b);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", data + i);
	int res = data[1] - data[0];
	if (res < 0)
		res = -res;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++) {
			int k = data[i] - data[j];
			if (k < 0)
				k = -k;
			if (k)
				res = gcd(res, k);
		}
	printf("%d\n", res);
}