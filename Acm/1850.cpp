#include <stdio.h>

typedef long long ll;

ll gcd(ll a, ll b) {
	if (!b)
		return a;
	return gcd(b, a%b);
}

int main()
{
	ll a=0, b=0;
	scanf("%lld %lld", &a, &b);
	a = gcd(a, b);
	for (ll i = 0; i < a; i++)
		printf("1");
}