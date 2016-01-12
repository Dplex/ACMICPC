#include <stdio.h>
double stack[100];
int main()
{
	int n;
	char x[150];
	int data[26];
	scanf("%d %s", &n, x);
	for (int i = 0; i < n; i++)
		scanf("%d", data + i);
	int cnt = 0;
	for (int i = 0; x[i]; i++) {
		if (x[i] == '+') {
			stack[cnt - 2] += stack[cnt-1];
			cnt--;
		}
		else if (x[i] == '-') {
			stack[cnt - 2] -= stack[cnt - 1];
			cnt--;
		}
		else if (x[i] == '*') {
			stack[cnt - 2] *= stack[cnt - 1];
			cnt--;
		}
		else if (x[i] == '/') {
			stack[cnt - 2] /= stack[cnt - 1];
			cnt--;
		}
		else {
			stack[cnt++] = (double)data[x[i] - 'A'];
		}
	}
	printf("%.2lf", stack[0]);

}