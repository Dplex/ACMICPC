#include <stdio.h>

int data[51];

int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		for (int i = 0; i < n; i++)
			scanf("%d", data + i);
		int k;
		scanf("%d", &k);
		int tmp;
		for (int i = 0; i < n && k; i++) {
			int idx=-1, max = -1;
			for (int j = i; j < n && j - i <= k; j++) {
				if (max < data[j]) {
					idx = j;
					max = data[j];
				}
			}
			for (int j = idx; j > i; j--) {
				tmp = data[j-1];
				data[j - 1] = data[j];
				data[j] = tmp;
				k--;
			}
		}
		for (int i = 0; i < n; i++)
			printf("%d ", data[i]);
		printf("\n");
	}
}