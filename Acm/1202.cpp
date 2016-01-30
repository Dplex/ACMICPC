#include <stdio.h>
#include <stdlib.h>
#include <set>

int m[300000][2];
std::multiset<int> c;

int comp1(const void *a, const void *b) {
	return ((int*)b)[1] - ((int*)a)[1];
}

int main()
{
	int n, k;
	int j;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d %d", m[i], m[i] + 1);
	for (int i = 0; i < k; i++) {
		scanf("%d", &j);
		c.insert(j);
	}

	qsort(m, n, 8, comp1);

	long long sum = 0;
	for (int i = 0; i < n ; i++) {
		auto f = c.lower_bound(m[i][0]);
		if (f != c.end()) {
			c.erase(f);
			sum += m[i][1];
		}
	}
	printf("%lld", sum);
}