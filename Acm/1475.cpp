#include <stdio.h>

int main()
{
	char x[20];
	int data[10] = { 0, };
	scanf("%s", x);
	for (int i = 0; x[i]; i++) {
		if (x[i] == '6' || x[i] == '9') {
			if (data[6] > data[9])
				data[9]++;
			else
				data[6]++;
		}
		else
			data[x[i] - '0']++;
	}
	int max = 0;
	for (int i = 0; i < 10; i++)
		if (max < data[i])
			max = data[i];
	printf("%d\n", max);
}