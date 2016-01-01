#include <stdio.h>

long long int data[10001];
long long int n, k;

int calc(long long int div) {
	long long int cnt = 0;
	for (int i = 0; i < n && cnt < k; i++) {
		cnt += (data[i] / div);
	}
	return cnt >= k;
}

int main()
{
	int st = 0;
	int la = 1e9;
	scanf("%lld %lld", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%lld", data + i);
	}
	int max = 0;
	while (st <= la)
	{
		int mid = (st + la) / 2;
		if (calc(mid))
			st = mid + 1;
		else
			la = mid - 1;
	}
	printf("%d\n", la);
	return 0;
}

