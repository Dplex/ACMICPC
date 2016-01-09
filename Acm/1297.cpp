#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	a *= a;
	float x = a / ((b*b) + (c*c));
	x = sqrt(x);
	printf("%d %d", (int)((b*x)+1e-9), (int)((c*x)+1e-9));
}