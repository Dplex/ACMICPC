#include <stdio.h>

char x[105];

int main()
{
	while (gets_s(x))
	{
		int data[4] = { 0,0,0,0 };
		for (int i = 0; x[i]; i++) {
			if (x[i] >= 'a' && x[i] <= 'z')
				data[0]++;
			else if (x[i] >= 'A' && x[i] <= 'Z')
				data[1]++;
			else if (x[i] == ' ')
				data[3]++;
			else
				data[2]++;
		}
		printf("%d %d %d %d\n", data[0], data[1], data[2], data[3]);
	}
}