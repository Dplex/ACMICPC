#include <stdio.h>

char X[10];
char data[1001][10];
int result[1001];
int cnt = 0;

int main()
{
	int n;
	scanf("%s ", X);
	scanf("%d ", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s ", data[i]);
		int flag = 0;
		for (int j = 0; j < 9; j++) {
			if (!(X[j] == '*' || X[j] == data[i][j])) {
				flag = 1;
				break;
			}
		}
		if (!flag) {
			result[cnt++] = i;
		}
	}
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++)
		printf("%s\n", data[result[i]]);
}