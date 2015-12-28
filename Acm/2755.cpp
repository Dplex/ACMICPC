#include <stdio.h>

double getGrade(char *s) {
	double sum = 0;
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
	return sum;
}
char name[101];
int total = 0;
double totalsum = 0;
int grade;
char s[2];

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d %s ", name, &grade, s);
		total += grade;
		totalsum += grade * getGrade(s);
	}
	printf("%.2lf\n", (double)totalsum / (double)total + 0.001);
	return 0;
}