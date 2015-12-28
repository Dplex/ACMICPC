#include <stdio.h>

	char s[2] = "";
int main()
{
	double sum = 0;
	scanf("%s", s);
	switch (s[0])
	{
	case 'A':
		sum = 4;
		break;
	case 'B':
		sum = 3;
		break;
	case 'C':
		sum = 2;
		break;
	case 'D':
		sum = 1;
		break;
	case 'F':
		sum = 0;
		break;
	default:
		break;
	}
	switch (s[1])
	{
	case '+':
		sum += 0.3;
		break;
	case '-':
		sum -= 0.3;
		break;
	default:
		break;
	}
	printf("%.1lf\n", sum);
	return 0;
}