#include <stdio.h>
#define MAX 100000000
int data[100000000];

int judge(int val) {
	while (val)
	{
		if (data[val] || (val%2==0 && val!=2) )
			return 0;
		val /= 10;
	}
	return 1;
}

int main()
{
	data[0] = data[1] = 1;
	for (int i = 3; i < MAX; i+=2) {
		if (!data[i] && i <= MAX/i ) {
			for (int j = i * i; j < MAX; j+=i) {
				data[j] = 1;
			}
		}
	}
	int n;
	scanf("%d", &n);
	int k = 1;
	while (n--) k *= 10;
	for (int i = k / 10 + 1; i < k; i+=2) {
		if (judge(i))
			printf("%d\n", i);
	}
}