#include <stdio.h>

int data[1005];

int main()
{
	int tmp;
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", data + i);
		for (int j = i; j > 0; j--) {
			if (data[j] < data[j - 1]) {
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
			}
			else
				break;
		}
	}
	int sel = 0;
	int max = 0;
	for (int i = 0; i < m; i++) {
		if (m - i > n) {
			if (max < n*data[i]) {
				max = n*data[i];
				sel = data[i];
			}
		}
		else {
			if (max < (m - i)*data[i]) {
				max = (m - i)*data[i];
				sel = data[i];
			}
		}
	}
	printf("%d %d\n", sel, max);
}