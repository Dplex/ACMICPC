#include <stdio.h>

int visit[10];
int data[10];

void algo(int lev, int sum) {
	static int flag = 0;
	if (flag)
		return;
	if (lev == 7) {
		if (sum == 100) {
			for (int i = 0; i < 9; i++) {
				if (visit[i])
					printf("%d\n", data[i]);
			}
			flag = 1;
		}
		return;
	}
	for (int i = 0; i < 9; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			algo(lev + 1, sum + data[i]);
			visit[i] = 0;
		}
	}
}

int main()
{
	for (int i = 0; i < 9; i++)
		scanf("%d", data + i);
	algo(0, 0);
}