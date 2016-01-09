#include <stdio.h>

double pi = 3.1415926535897932;
int main()
{
	double n;
	scanf("%lf", &n);
	printf("%.6lf\n%.6lf", pi*n*n , (n+n)*n);
}