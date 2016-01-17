#include <stdio.h>
int cnt = 0;
int n;
int data[15];
int visit[15];

int isValid(int idx)
{
	for (int i = 0; i < idx; i++) {
		if (data[i] == data[idx])
			return 0;
		if (data[i] - data[idx] == idx - i || data[i] - data[idx] == i - idx)
			return 0;
	}
	return 1;
}

void algo(int idx) {
	if (!isValid(idx-1))
		return;
	if (idx >= n) {
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (!visit[i]){
			visit[i] = 1;
			data[idx] = i;
			algo(idx + 1);
			visit[i] = 0;
		}
	}
}

int main()
{
	scanf("%d", &n);
	algo(0);
	printf("%d\n", cnt);
}