#include <stdio.h>

int n;

int visit[10];

void algo(int lev)
{
	if (lev == n) {
		for(int i=1; i<=n; i++)
			for (int j = 1; j <= n; j++) {
				if (visit[j] == i) {
					printf("%d ", j);
					break;
				}
			}
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visit[i]) {
			visit[i] = lev + 1;
			algo(lev + 1);
			visit[i] = 0;
		}
	}
}

int main()
{
	scanf("%d", &n);
	algo(0);


}