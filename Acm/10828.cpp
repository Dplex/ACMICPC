#include <stdio.h>

char data[6];
int stack[10001];
int cnt = 0;

int main()
{
	int tc;
	int c = 0;
	scanf("%d", &tc);
	while (tc--)
	{
		scanf(" %s", data);
		if (data[0] == 'p' && data[1] == 'u') {
			scanf("%d", &c);
			stack[cnt++] = c;
		}
		else if (data[0] == 'p' && data[1] == 'o') {
			if (cnt == 0)
				printf("%d\n", -1);
			else
				printf("%d\n", stack[--cnt]);
		}
		else if (data[0] == 's') {
			printf("%d\n", cnt);
		}
		else if (data[0] == 'e') {
			printf("%d\n", cnt == 0 ? 1 : 0);
		}
		else {
			if (cnt == 0)
				printf("%d\n", -1);
			else
				printf("%d\n", stack[cnt-1]);
		}
	}
}