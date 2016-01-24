#include <stdio.h>

char x[1000005];

int main()
{
	int n;
	scanf("%d", &n);
	int m;
	scanf("%d %s", &m, x);
	int cnt = 0;
	int sum = 0;
	for (int i = 0; i < m; i++) {
		if (!cnt) {
			if (x[i] == 'I' && x[i + 1] == 'O' && x[i + 2] == 'I') {
				cnt++;
				i += 2;
			}
		}
		else {
			if (x[i] == 'O' && x[i + 1] == 'I') {
				i++;
				cnt++;
			}
			else {
				cnt = 0;
				i--;
			}
		}
		if (n <= cnt)
			sum++;
	}
	printf("%d\n", sum);
}