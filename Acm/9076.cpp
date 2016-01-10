#include <stdio.h>

int data[5];

int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		for (int i = 0; i < 5; i++) {
			scanf("%d", data + i);
			for (int j = i; j>0; j--) {
				if (data[j] < data[j - 1]) {
					int tmp = data[j];
					data[j] = data[j - 1];
					data[j - 1] = tmp;
				}
			}
		}
		if (data[3] - data[1] >= 4)
			printf("KIN\n");
		else
			printf("%d\n", data[1] + data[2] + data[3]);
	}
}