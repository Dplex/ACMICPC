#include <stdio.h>

char x[10005];
char y[10005];
char revx[10005];
char revy[10005];
char result[10005];

int main()
{
	scanf("%s %s", x, y);
	int len = 0;
	while (x[len++]);
	for (int i = len - 1; i >= 0; i--)
		revx[len - i - 2] = x[i];
	len = 0;
	while (y[len++]);
	for (int i = len - 1; i >= 0; i--)
		revy[len - i - 2] = y[i];
	int tmp = 0;
	int i;
	int sum;
	for (i = 0; revx[i] && revy[i]; i++) {
		sum = revx[i] - '0' + revy[i] - '0' + tmp;
		tmp = sum / 10;
		sum %= 10;
		result[i] = sum + '0';
	}
	for (; revx[i]; i++) {
		sum = revx[i] - '0' + tmp;
		tmp = sum / 10;
		sum %= 10;
		result[i] = sum + '0';
	}
	for (; revy[i]; i++) {
		sum = revy[i] - '0' + tmp;
		tmp = sum / 10;
		sum %= 10;
		result[i] = sum + '0';
	}
	if (tmp) {
		result[i] = tmp + '0';
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%c", result[j]);
}