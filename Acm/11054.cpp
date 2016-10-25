#include <stdio.h>

int up[1001];
int down[1001];

int data[1001];
int stack[1001];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", data + i);
	int st = 0;
	stack[st++] = -1;
	for (int i = 0; i < n; i++) {
		if (stack[st - 1] < data[i]) {
			stack[st] = data[i];
			up[i] = st;
			st++;
			continue;
		}
		for (int j = st; j > 0; j--) {
			if (stack[j - 1] < data[i]) {
				stack[j] = data[i];
				up[i] = j;
				break;
			}
		}
	}
	st = 0;
	stack[st++] = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (stack[st - 1] < data[i]) {
			stack[st] = data[i];
			down[i] = st;
			st++;
			continue;
		}
		for (int j = st; j > 0; j--) {
			if (stack[j - 1] < data[i]) {
				stack[j] = data[i];
				down[i] = j;
				break;
			}
		}
	}
	int max = 0;
	for (int i = 0; i < n; i++)
		if (max < up[i] + down[i])
			max = up[i] + down[i];
	printf("%d\n", max - 1);
}