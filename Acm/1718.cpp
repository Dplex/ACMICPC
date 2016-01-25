#include <stdio.h>
#include <string.h>

char x[30001];
char y[30001];
int main()
{
	gets_s(x);
	scanf("%s", y);
	int len = strlen(y);
	for (int i = 0; x[i]; i++) {
		if (x[i] == ' ')
			printf(" ");
		else
			printf("%c", (x[i] - 'a' - (y[i%len] - 'a') + 'z' - 'a') % 26 + 'a');
	}
}