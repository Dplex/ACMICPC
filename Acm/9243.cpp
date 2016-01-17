#include <stdio.h>

char x[1005];
char y[1005];

int main()
{
	int n;
	int a, b;
	scanf("%d ", &n);
	scanf("%s %s", x, y);
	for (int i = 0; x[i]; i++) {
		if (n % 2 && x[i] == y[i]) {
			printf("Deletion failed");
			return 0;
		}
		else if (n % 2 == 0 && x[i] != y[i]){
			printf("Deletion failed");
			return 0;
		}
	}
	printf("Deletion succeeded");
}