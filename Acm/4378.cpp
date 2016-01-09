#include <stdio.h>

char *keyBoard = "1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";

char x[500];

int main()
{
	while (gets(x))
	{
		for (int i = 0; x[i]; i++) {
			if (x[i] == ' ')
				printf(" ");
			else {
				for (int j = 0; j < keyBoard[j + 1]; j++) {
					if (keyBoard[j + 1] == x[i]) {
						printf("%c", keyBoard[j]);
						break;
					}
				}
			}
		}
		printf("\n");
	}
}