#include <stdio.h>

int data[3000000];
#define init 1500000
int main()
{
	int n, val;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &val);
		data[val + init]++;
	}
	for (int i = 2500000; i >= 500000; i--) {
		if (data[i]) {
			data[i]--;
			printf("%d\n", i - init);
			i++;
		}
	}
}