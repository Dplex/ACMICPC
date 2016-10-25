#include <stdio.h>

int data[6][6];

int absc(char x, char y) {
	int res = x - y;
	return res > 0 ? res : -res;
}

int absi(int x, int y) {
	int res = x - y;
	return res > 0 ? res : -res;
}

int main()
{
	char c;
	int a;
	scanf("%c%d ", &c, &a);
	int error;
	if (c != 'A' && a != 1) {
		error++;
	}
	data[0][0] = 1;
	char cc;
	int aa;
	for (int i = 1; i < 36; i++) {
		scanf("%c%d ", &cc, &aa);
		if (!(cc >= 'A' && cc <= 'F' && aa >= 1 && aa <= 6)) {
			error++;
		}
		if (absc(cc, c) * absi(aa, a) != 2) {
			error++;
		}
		data[cc - 'A'][aa - 1]++;
		if (data[cc - 'A'][aa - 1] != 1) {
			error++;
		}
		c = cc;
		a = aa;
	}
	if (absc(cc, 'A') * absi(aa, 1) != 2) {
		error++;
	}
	if (error)
		printf("Invalid\n");
	else
		printf("Valid\n");
}