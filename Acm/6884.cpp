#include <stdio.h>
int data[10001];

int isPrime(int num) {
	if (num > 2 && num % 2 == 0)
		return 0;
	for (int i = 3; i <= num / i; i += 2)
		if (num%i == 0)
			return 0;
	return 1;
}

int main()
{
	int n;
	int tc;
	scanf("%d", &tc);
here:;
	while (tc--)
	{
		scanf("%d", &n);
		int i;
		for (i = 0; i < n; i++)
			scanf("%d", data + i);
		for (i = 2; i <= n; i++) {
			int sum = 0;
			int j;
			for (j = 0; j < i; j++)
				sum += data[j];
			if (isPrime(sum)) {
				printf("Shortest primed subsequence is length %d:", i);
				for (int k = 0; k < i; k++)
					printf(" %d", data[k]);
				printf("\n");
				goto here;
			}
			while (j<n)
			{
				sum += data[j] - data[j - i];
				if (isPrime(sum)) {
					printf("Shortest primed subsequence is length %d:", i);
					for (int k = 0; k < i; k++)
						printf(" %d", data[k+j-i+1]);
					printf("\n");
					goto here;
				}
				j++;
			}
		}
		printf("This sequence is anti-primed.\n");
	}
}