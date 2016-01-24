#include <stdio.h>

int main()
{
	int as = 0, bs = 0;
	int tc;
	scanf("%d", &tc);
	int val;
	while (tc--)
	{
		scanf("%d", &val);
		as += (val + 30) / 30 * 10;
		bs += (val + 60) / 60 * 15;
	}
	if (as == bs)
		printf("Y M %d", as);
	else if (as <= bs)
		printf("Y %d\n", as);
	else
		printf("M %d\n", bs);
}