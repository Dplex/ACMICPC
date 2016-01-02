#include <stdio.h>

int data[101];
int data2[101];

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
		data[i] = i;
	for (int i = 0; i < M; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		for (int j = a; j <= b; j++) 
			data2[j] = data[j];

		for (int j = c; j <= b; j++)
			data[j - c + a] = data2[j];

		for (int j = a; j < c; j++)
			data[j + b - c + 1] = data2[j];

	}
	for (int i = 1; i <= N; i++)
		printf("%d ", data[i]);
}