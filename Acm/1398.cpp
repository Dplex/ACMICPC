#include <stdio.h>
typedef long long ll;

ll data[40];
int max = 0;

void algo(ll val, int lev, int* total) {
	if (*total >= 1000)
		return;
	if (!val) {
		if (max > lev)
			max = lev;
		return;
	}
	if (lev >= max)
		return;
	for (int i = 22; i >= 0; i--) {
		if (data[i] <= val) {
			*total += 1;
			algo(val - data[i], lev + 1, total);
		}
	}
}

int main()
{
	int tc;
	scanf("%d", &tc);
	data[0] = 1, data[1] = 10, data[2] = 25;
	for (int i = 3; i < 24; i += 3) {
		data[i] = data[i - 2] * 10;
		data[i + 1] = data[i - 2] * 100;
		data[i + 2] = data[i - 1] * 100;
	}
	ll a;
	while (tc--)
	{
		int total = 0;
		scanf("%lld", &a);
		max = 1000000000;
		algo(a, 0, &total);
		printf("%d\n", max);
	}
}