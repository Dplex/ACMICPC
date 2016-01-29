#include <stdio.h>

int gcd(int a, int b) {
	if (!b)
		return a;
	return gcd(b, a%b);
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int k = b / a;
	int i=1;
	while (i <= k/i)
		i++;
	i--;
	for (; ; i--) {
		if (k%i == 0 && gcd(i, k / i) == 1) {
			printf("%d %d", a*i, k/i*a);
			return 0;
		}
	}

}