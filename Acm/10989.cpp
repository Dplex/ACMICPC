#include <stdio.h>
#include <stdlib.h>

int data[10001];
int main()
{
	int n;
	int tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &tmp);
		data[tmp]++;
	}
	for (int i = 1; i < 10001; i++){
		for (int j = 0; j < data[i]; j++)
			printf("%d\n", i);
	}
}