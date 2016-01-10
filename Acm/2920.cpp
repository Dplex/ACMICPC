#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	int flag=0;
	for (int i = 1; i < 8; i++) {
		scanf("%d", &b);
		if (a < b)
			flag++;
		else
			flag--;
		a = b;
	}
	if (flag == 7)
		printf("ascending");
	else if (flag == -7)
		printf("descending");
	else
		printf("mixed");
}