#include <stdio.h>

int data[10000];

int main()
{
	int n;
	scanf("%d", &n);
	double sum = 0;
	int k;
	int min = 5000, mymax = -5000;
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		data[k + 5000]++;
		sum += k;
		if (min > k)
			min = k;
		if (mymax < k)
			mymax = k;
	}
	sum /= n;
	if (sum > 0)
		sum = sum + 0.5;
	else
		sum = sum - 0.5;
	int mid = sum;
	printf("%d\n", mid);
	int cnt = 0;
	for (int i = 0; i < 10000; i++) {
		if (cnt + data[i] >= (n + 1) / 2) {
			printf("%d\n", i - 5000);
			break;
		}
		cnt += data[i];
	}
	int max = 0;
	int flag = 0;
	int idx = 0;
	for (int i = 0; i < 10000; i++) {
		if (max < data[i]) {
			flag = 1;
			max = data[i];
			idx = i - 5000;
		}
		else if (max == data[i]) {
			if (flag == 1) {
				flag = 2;
				idx = i - 5000;
			}
		}
	}
	printf("%d\n", idx);
	printf("%d\n", mymax - min);
}