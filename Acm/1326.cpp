#include <stdio.h>

int data[10001];
int floor[10001];
int queue[1000001];
int st, la;

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", floor + i);
	int k, q;
	scanf("%d %d", &k, &q);
	data[k] = 1;
	queue[st++] = k;
	while (st!=la)
	{
		k = queue[la++];
		if (k == q) {
			printf("%d\n", data[k] - 1);
			return 0;
		}
		for (int i = k-floor[k]; i > 0; i -= floor[k]) {
			if (data[i] == 0 || data[i] > data[k] + 1) {
				data[i] = data[k] + 1;
				queue[st++] = i;
			}
		}
		for (int i = k + floor[k]; i <= n; i += floor[k]) {
			if (data[i] == 0 || data[i] > data[k] + 1) {
				data[i] = data[k] + 1;
				queue[st++] = i;
			}
		}
	}
	printf("%d\n", -1);
}