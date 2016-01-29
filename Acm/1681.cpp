#include <stdio.h>

int data[1000501];

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int st = 0, la = 0;
	for (int i = 1; i < 10; i++)
		if (i != b)
			data[st++] = i;
	int val;
	while (st<=a)
	{
		val = data[la++];
		for (int i = 0; i < 10; i++)
			if (i != b)
				data[st++] = val * 10 + i;
	}
	printf("%d\n", data[a-1]);
}