#include <stdio.h>

int data[101];

int main()
{
	int sum = 0;
	int a;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a);
		sum += a;
		data[a / 10]++;
	}
	int cnt = 0;
	int sel = 0;
	for (int i = 0; i <= 100; i++) {
		if (cnt < data[i]) {
			cnt = data[i];
			sel = i * 10;
		}
	}
	printf("%d\n%d", sum / 10, sel);
}