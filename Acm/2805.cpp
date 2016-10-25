#include <stdio.h>

int data[1000001];
int n;
long long get(long long val) {
	long long res = 0;
	for (int i = 0; i < n; i++) {
		if (data[i] > (int)val)
			res += data[i] - val;
	}
	return res;
}

int main()
{
	long long m;
	scanf("%d %lld", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", data + i);
	long long st = 0, la = 1e10;
	long long mid = 0;
	while (st < la)
	{
		if ((st + la) / 2 == mid)
			break;
		mid = (st + la) / 2;
		if (get(mid) >= m)
			st = mid;
		else
			la = mid;
	}
	st--;
	while (get(st+1) >= m)
	{
		st++;
	}
	printf("%lld\n", st);
}