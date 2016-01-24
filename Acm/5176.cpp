#include <stdio.h>

void algo() {
	int P, M;
	scanf("%d %d", &P, &M);
	int data[501] = { 0, };
	int a;
	int cnt = 0;
	for (int i = 0; i < P; i++) {
		scanf("%d", &a);
		if (a > M || data[a])
			cnt++;
		else
			data[a] = 1;
	}
	printf("%d\n", cnt);
}

int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		algo();
	}
}