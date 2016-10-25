#include <stdio.h>
#include <string.h>

char data[51];
char res[51];
char tmp[51];
int len;

void algo(int idx1, int idx2) {
	static int cnt = 0;
	int st = 0;
	for (int i = idx1; i >= 0; i--)
		tmp[st++] = data[i];
	for (int i = idx2; i > idx1; i--)
		tmp[st++] = data[i];
	for (int i = len - 1; i > idx2; i--)
		tmp[st++] = data[i];
	if (cnt == 0) {
		cnt = 1;
		strcpy(res, tmp);
	}
	if (strcmp(res, tmp) > 0)
		strcpy(res, tmp);
}

int main()
{
	scanf("%s", data);
	len = strlen(data);
	for (int i = 0; i < len; i++)
		for (int j = i + 1; j < len; j++)
				algo(i, j);
	printf("%s", res);
}