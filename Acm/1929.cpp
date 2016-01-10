#include <stdio.h>

int data[1000000];

int main()
{
	data[0] = data[1] = 1;
	int M, N;
	scanf("%d %d", &M, &N);
	for (int i = 2; i <= N; i++) {
		if (!data[i]) {
			for (int j = i * 2; j <= N; j += i) {
				data[j] = 1;
			}
		}
	}
	for (int i = M; i <= N; i++) {
		if (!data[i])
			printf("%d\n", i);
	}
}