#include <stdio.h>

char x[105];
char rev[105];

int main()
{
	scanf("%s", x);
	int len = 104;
	while (!x[len--]);
	len++;
	for (int i = len; i >= 0; i--)
		rev[len - i] = x[i];
	int i;
	for (i = len + 1; i % 3; i++)
		rev[i] = '0';
	for (; i > 0; i -= 3) {
		int sum = (rev[i - 1] - '0') * 4 + (rev[i - 2] - '0') * 2 + (rev[i - 3] - '0');
		printf("%d", sum);
	}
}