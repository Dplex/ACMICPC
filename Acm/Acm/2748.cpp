#include <stdio.h>

long long int data[91];

long long int algo(int n){
	if (data[n])
		return data[n];
	return data[n] = algo(n - 1) + algo(n - 2);
}

int main()
{
	data[1] = data[2] = 1;
	int n;
	scanf("%d", &n);
	printf("%lld\n", algo(n));
}