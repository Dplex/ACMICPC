#include <stdio.h>

int main()
{
	int a;
	int n, w, h;
	scanf("%d %d %d", &n, &w, &h);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a * a <= w*w + h*h)
			printf("DA\n");
		else
			printf("NE\n");
	}
}