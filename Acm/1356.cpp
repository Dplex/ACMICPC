#include <stdio.h>

char data[20];

int flag = 0;

void algo(int idx){
	int sum1 = 1, sum2 = 1;
	for (int i = 0; i < idx; i++){
		sum1 *= data[i] - '0';
	}
	for (int i = idx; data[i] != 0; i++)
		sum2 *= data[i] - '0';
	if (sum1 == sum2)
		flag = 1;
}

int main()
{
	scanf("%s", data);
	int idx = 0;
	while (data[idx]){
		idx++;
	}
	for (int i = 1; i < idx; i++)
		algo(i);
	if (flag)
		printf("YES");
	else
		printf("NO");
}