#include <stdio.h>
int queue[1000000];
int main()
{
	int n;
	scanf("%d", &n);
	int st = 0, la = 0;
	for (int i = 0; i < n; i++)
		queue[st++] = i + 1;
	while (st>la)
	{
		printf("%d ", queue[la++]);
		queue[st++] = queue[la++];
	}
	
}