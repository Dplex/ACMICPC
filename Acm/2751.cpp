#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}

int data[1000001];
int main()
{
	int n;
	int tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", data + i);
	}
	qsort(data, n, 4, comp);
	/*	for (int j = i; j > 0; j--){
			if (data[j] < data[j - 1]){
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
			}
			else
				break;
		}
	}*/
	for (int i = 0; i < n; i++)
		printf("%d\n", data[i]);
}