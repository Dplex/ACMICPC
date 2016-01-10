#include <stdio.h>

int data[100001];
int cnt = 0;
int main()
{
	int n;
	while (scanf("%d", &n)) {
		if (n == -1)
			return 0;
		int sum = 1;
		cnt = 0;
		for (int i = 2; i <= n / i; i++) {
			if (n%i == 0) {
				data[cnt++] = i;
				sum += i + (n / i);
			}
		}
		if (sum == n) {
			printf("%d = 1 ", n);
			for (int i = 0; i < cnt; i++)
				printf("+ %d ", data[i]);
			for (int i = cnt - 1; i >= 0; i--) {
				printf("+ %d ", n / data[i]);
			}
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", n);
	}
}