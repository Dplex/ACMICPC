#include <stdio.h>

int ch['z' - 'a' + 1];

int main()
{
	char c;
	int max = 0;
	while (~scanf("%c", &c))
	{
		if (c >= 'a' && c <= 'z') {
			ch[c - 'a']++;
			if (ch[c - 'a'] > max)
				max = ch[c - 'a'];
		}
	}
	for (int i = 0; i < 26; i++)
		if (ch[i] == max) {
			printf("%c", i + 'a');
		}
}