#include <stdio.h>

int data[1000002];

int isPrime(int n) {
	if (n > 2 && n % 2 == 0)
		return 0;
	for (int i = 3; i <= n / i; i += 2)
		if (n%i == 0)
			return 0;
	return 1;
}

int get(int idx) {
	if (data[idx])
		return data[idx];
	int val = 0;
	int k = idx;
	data[k] = 2;
	while (idx)
	{
		val += (idx % 10) * (idx % 10);
		idx /= 10;
	}
	if (val == 1)
		return data[k] = 1;
	return data[k] = get(val);
}

int main()
{
	int n;
	data[0] = 2;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		if (get(i) == 1 && isPrime(i))
			printf("%d\n", i); 
	}
}