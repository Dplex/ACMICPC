#include <stdio.h>


int main()
{
	int n;
	scanf("%d", &n);
	double x;
	char ch[5];
	for (int i = 0; i < n; i++) {
		scanf("%lf %s ", &x, ch);
		if (ch[0] == 'k') 
			printf("%.4lf lb\n", x*2.2046);
		else if (ch[0] == 'g') 
			printf("%.4lf l\n", x*3.7854);
		else if (ch[1] == 'b') 
			printf("%.4lf kg\n", x*0.4536);
		else
			printf("%.4lf g\n", x*0.2642);
	}
}