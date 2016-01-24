#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 1; ; i++) {
		int bb = i - 1;
		if (bb % 15 == a - 1 && bb % 28 == b - 1 && bb % 19 == c - 1) {
			printf("%d", i);
			break;
		}
	}

}