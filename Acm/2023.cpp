#include <stdio.h>

int queue[1000];
int arr[] = { 1, 3, 5, 7, 9 };

int isPrime(int val) { // 소수를 0을 리턴 
	if (val % 2 == 0 && val != 2)
		return 1;
	for (int i = 3; i <= val / i; i += 2){
		if (val % i == 0) {
			return 1;
		}
	}
	return 0;
}

int judge(int val) {
	while (val)
	{
		if (isPrime(val))
			return 0;
		val /= 10;
	}
	return 1;
}

int main()
{
	int st = 0, la = 0;
	queue[st++] = 2;
	queue[st++] = 3;
	queue[st++] = 5;
	queue[st++] = 7;

	int n;
	scanf("%d", &n);
	int min = 1, max = 10;
	n--;
	while (n--)
	{
		min *= 10;
		max *= 10;
	}
	while (st!=la)
	{
		int val = queue[la++];
		if (val >= min && val <= max) {
			printf("%d\n", val);
			continue;
		}
		for (int i = 0; i < 5; i++) {
			int newval = val * 10 + arr[i];
			if (judge(newval)) {
				queue[st++] = newval;
			}
		}
	}
}
