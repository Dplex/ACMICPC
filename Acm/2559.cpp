#include <stdio.h>

int data[100001];

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = 0;
	for (int i = 0; i < b; i++) {
		scanf("%d", data + i);
		sum += data[i];
	}
	int max = sum;
	for (int i = b; i < a; i++) {
		scanf("%d", data + i);
		sum += data[i] - data[i - b];
		if (max < sum)
			max = sum;
	}
	printf("%d\n", max);

}