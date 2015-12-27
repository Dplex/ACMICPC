#include <stdio.h>

int data[101];

int gcd(int a, int b) {
	if (!b)
		return a;
	return gcd(b, a%b);
}

int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		int N;
		scanf("%d", &N);
		int sum = 0;
		for (int i = 0; i < N; i++) {
			scanf("%d", data + i);
			for (int j = 0; j < i; j++) {
				sum += gcd(data[i], data[j]);
			}
		}
		printf("%d\n", sum);
	}
}