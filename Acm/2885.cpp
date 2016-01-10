#include <stdio.h>

int main()
{
	int k;
	scanf("%d", &k);
	int val = 1;
	while (val < k) val *= 2;
	int cnt = 0;
	int sum = 0;
	printf("%d ", val);
	while (sum != k)
	{
		if (sum + val <= k)
			sum += val;
		val /= 2;
		cnt++;
	}
	printf("%d", cnt-1);
}