#include <stdio.h>

int getzero()
{
	return 0;
}

int getone()
{
	return 1;
}

int main()
{
	int cnt = 0;
	char ch;
	int(*(fPtr[128]))();
	for (int i = 0; i < 128; i++)
		fPtr[i] = getzero;
	fPtr['a'] = fPtr['e'] = fPtr['i'] = fPtr['o'] = fPtr['u'] = getone;
	while (~scanf("%c", &ch))
	{
		if (ch == '\n')
			break;
		cnt += fPtr[ch]();
	}
	printf("%d\n", cnt);
}