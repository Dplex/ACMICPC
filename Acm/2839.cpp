#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int k = n / 5;
	for (int i = k; i >= 0; i--) {
		if ((n - i * 5) % 3 == 0){
			printf("%d", i + (n - i * 5) / 3);
			return 0;
		}
	}
	printf("-1");
}