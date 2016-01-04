#include <stdio.h>

int main()
{
	int tc;
	scanf("%d", &tc);
	while (tc--)
	{
		char x1[100];
		char x2[100];
		char x[200];
		char ch;
		scanf("%s %s%c", x1, x2, &ch);
		while (ch!='\n')
		{
			scanf("%s%c", x, &ch);
			printf("%s ", x);
		}
		printf("%s %s\n", x1, x2);
	}
}