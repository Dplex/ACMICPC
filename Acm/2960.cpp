#include <stdio.h>

int data[1001];

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 2; i <= N; i++) {
		if (!data[i]) {
			for (int j = i; j <= N; j += i) {
				if (!data[j]) {
					K--;
					if (!K) {
						printf("%d\n", j);
						return 0;
					}
					data[j] = 1;
				}
			}
		}
	}
}