#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
	return - (*(char*)a - *(char*)b);
}

char x[1000000];

int main()
{
	scanf("%s", x);
	int len = strlen(x);
	qsort(x, len, 1, comp);
	int sum = 0;
	for (int i = 0; i < len - 1; i++)
		sum += x[i] - '0';
	if (sum % 3 == 0 && x[len - 1] == '0')
		printf("%s", x);
	else
		printf("-1");
}