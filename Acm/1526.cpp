#include <stdio.h>

int max = 0;
int N;

void algo(int num){
	if (N < num)
		return;
	if (max < num)
		max = num;
	algo(num * 10 + 7);
	algo(num * 10 + 4);
}

int main()
{
	scanf("%d", &N);
	algo(0);
	printf("%d\n", max);
}