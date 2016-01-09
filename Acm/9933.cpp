#include <stdio.h>

char data[102][15];

int comp(int idx1, int idx2) {
	int len = 0;
	while (data[idx2][len++]);
	len--;
	for (int i = 0; i < len; i++) {
		if (data[idx1][i] != data[idx2][len - i-1])
			return 0;
	}
	return 1;
}

void print(int idx) {
	int len = 0;
	while (data[idx][len++]);
	len--;
	printf("%d %c", len, data[idx][len / 2]);
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", data[i]);
		for (int j = 0; j <= i; j++) {
			if (comp(i, j)) {
				print(i);
				return 0;
			}
		}
	}
	if (n == 1)
		printf("%s", data[0]);
}