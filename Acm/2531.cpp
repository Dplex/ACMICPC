#include <stdio.h>

	int N[3000001] = { 0, };
	int D[3001] = { 0, };
int main()
{
	int n, d, k, c;
	scanf("%d %d %d %d", &n, &d, &k, &c);
	for (int i = 0; i < n; i++) 
		scanf("%d", N + i);
	int sum = 0;
	for (int i = 0; i < k; i++) {
		if (!D[N[i]])
			sum++;
		D[N[i]]++;
	}
	int max = sum;
	if (!D[c])
		max += 1;
	for (int i = k; i < k + n; i++) {
		int bonus=0;
		if (D[N[i-k]] == 1)
			sum--;
		D[N[i-k]]--;
		if (!D[N[i%n]])
			sum++;
		D[N[i%n]]++;
		if (!D[c])
			bonus = 1;
		if (max < sum + bonus)
			max = sum + bonus;
	}
	printf("%d\n", max);
}