#include <stdio.h>

int data[3][5];

void swab(int a, int b) {
	for (int i = 0; i < 5; i++) {
		int tmp = data[a][i];
		data[a][i] = data[b][i];
		data[b][i] = tmp;
	}
}

int comp(int a, int b) {
	if (data[a][0] < data[b][0]) {
		swab(a, b);
		return 1;
	}
	else if (data[a][0] == data[b][0] && data[a][3] < data[b][3]) {
		swab(a, b);
		return 1;
	}
	else if (data[a][0] == data[b][0] && data[a][3] == data[b][3] && data[a][2] < data[b][2]) {
		swab(a, b);
		return 1;
	}
	return 0;
}

int main()
{
	int N;
	scanf("%d", &N);
	int a, b, c;
	data[0][4] = 1;
	data[1][4] = 2;
	data[2][4] = 3;
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &a, &b, &c);
		data[0][0] += a;
		data[1][0] += b;
		data[2][0] += c;
		data[0][a]++;
		data[1][b]++;
		data[2][c]++;
	}
	comp(1, 2);
	comp(0, 1);
	comp(1, 2);
	comp(0, 1);
	if (data[1][0] < data[0][0] || (data[0][0] == data[1][0] && data[1][3] < data[0][3]) || (data[0][0] == data[1][0] && data[0][3] == data[1][3] && data[0][2] > data[1][2])) {
		printf("%d %d", data[0][4], data[0][0]);
	}
	else
		printf("%d %d", 0, data[0][0]);
}