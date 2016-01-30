#include <stdio.h>

int get(int cnt) {
	if (cnt <= 1)
		return 0;
	if (cnt == 2)
		return 1;
	if (cnt % 2 == 0)
		return 0;
	for (int i = 3; i <= cnt / i; i += 2)
		if (cnt %i == 0)
			return 0;
	return 1;
}

int isjudge(int val) {
	int cnt = 0;
	while (val%2 ==0)
	{
		val /= 2;
		cnt++;
	}
	for (int i = 3; i <= val / i; i += 2) {
		if (val % i == 0) {
			cnt++;
			val /= i;
			i -= 2;
		}
	}
	if (val != 1)
		cnt++;
	return get(cnt);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int cnt = 0;
	for (int i = a; i <= b; i++) {
		if (isjudge(i)) {
			printf("%d\n", i);
			cnt++;
		}
	}
	printf("%d\n", cnt);
}