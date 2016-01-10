#include <stdio.h>
int data[10];
int main()
{
	for (int i = 0; i < 10; i++)
		scanf("%d", data + i);
	int flag = -1;
	int asum=0, bsum = 0, b;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &b);
		if (data[i] > b) {
			asum += 3;
			flag = 0;
		}
		else if (data[i] < b) {
			bsum += 3;
			flag = 1;
		}
		else {
			asum++; bsum++;

		}
	}
	printf("%d %d\n", asum, bsum);
	if (asum > bsum)
		printf("A");
	else if (asum < bsum)
		printf("B");
	else
		printf("%c", flag >= 0 ? 'A'+flag : 'D');
}