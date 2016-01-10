#include <stdio.h>

int main()
{
	int tc;
	scanf("%d", &tc);
	int sum = 0;
	int a;
	for (int i = 0; i < tc; i++) {
		scanf("%d", &a);
		sum += a;
	}
	printf("Junhee is ");
	if (sum <= tc / 2)
		printf("not ");
	printf("cute!");
}