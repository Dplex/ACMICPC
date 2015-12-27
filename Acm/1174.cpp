#include <stdio.h>

long long int data[10000];
int n;
int cnt = 0;
void algo(int level, long long int num){
	if (level == 0){
		data[cnt++] = num;
		return;
	}
	for (long long int i = 0; i < num % 10; i++)
		algo(level - 1, num * 10 + i);
}

int main()
{
	scanf("%d", &n);
	for (int level = 0; level <= 10; level++){
		for (long long int i = 0; i < 10; i++){
			algo(level, i);
		}
	}
	if (n > 1023)
		printf("-1");
	else
		printf("%lld\n", data[n - 1]);
}