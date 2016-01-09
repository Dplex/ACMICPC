#include <stdio.h>

int data['z' - 'a' + 1];

int main()
{
	char x[1001];
	scanf("%s ", x);
	for (int i = 0; x[i]; i++)
		data[x[i] - 'a']++;
	scanf("%s", x);
	for (int i = 0; x[i]; i++)
		data[x[i] - 'a']--;
	int sum = 0;
	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		if (data[i])
			sum += data[i] > 0 ? data[i] : -data[i];
	}
	printf("%d\n", sum);
}