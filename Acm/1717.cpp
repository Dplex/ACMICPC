#include <stdio.h>

int data[1000001];
int stack[1000005];
int getroot(int idx) {
	int st = 0;
	while (data[idx] != idx)
	{
		stack[st++] = idx;
		idx = data[idx];
	}
	for (int i = 0; i < st; i++)
		data[stack[i]] = idx;
	return idx;
}

void add(int a, int b) {
	a = getroot(a);
	b = getroot(b);
	if (a < b)
		data[b] = a;
	else
		data[a] = b;
}

int main()
{
	int n, m;
	int sel, a, b;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		data[i] = i;
	while (m--)
	{
		scanf("%d %d %d", &sel, &a, &b);
		if (sel) {
			if (getroot(a) == getroot(b))
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			add(a, b);
	}
}