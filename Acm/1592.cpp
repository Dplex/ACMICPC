#include <stdio.h>

int data[1001];

int main()
{
	int n, m, l;
	scanf("%d %d %d", &n, &m, &l);
	data[0] = 1;
	int k=0;
	int next;
	int cnt = 0;
	while (1)
	{
		if (data[k] == m)
			break;
		if (data[k] % 2 == 0)
			next = k + l;
		else
			next = k - l + n;
		next %= n;
		data[next]++;
		k = next;
		cnt++;
	}
	printf("%d\n", cnt);
}