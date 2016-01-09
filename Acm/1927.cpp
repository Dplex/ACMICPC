#include <stdio.h>

int heap[100005];
int cnt = 1;

void heapify(int idx) {
	int tmp;
	if (idx * 2 > cnt)
		return;
	if (idx * 2 + 1 > cnt) {
		if (heap[idx] > heap[idx * 2]) {
			tmp = heap[idx];
			heap[idx] = heap[idx * 2];
			heap[idx * 2] = tmp;
		}
		return;
	}
	if (heap[idx * 2] < heap[idx * 2 + 1] && heap[idx * 2] < heap[idx]) {
		tmp = heap[idx];
		heap[idx] = heap[idx * 2];
		heap[idx * 2] = tmp;
		heapify(idx * 2);
	}
	else if (heap[idx * 2] > heap[idx * 2 + 1] && heap[idx * 2+1] < heap[idx]) {
		tmp = heap[idx];
		heap[idx] = heap[idx * 2+1];
		heap[idx * 2+1] = tmp;
		heapify(idx * 2+1);
	}
}

int remove1() {
	if (cnt == 1)
		return 0;
	int k = heap[1];
	heap[1] = heap[cnt - 1];
	cnt--;
	heapify(1);
	return k;
}
void add(int k) {
	heap[cnt++] = k;
	int idx = cnt - 1;
	int tmp;
	while (idx > 1)
	{
		if (heap[idx] < heap[idx / 2]) {
			tmp = heap[idx];
			heap[idx] = heap[idx / 2];
			heap[idx / 2] = tmp;
			idx /= 2;
		}
		else
			break;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int k;
	while (n--)
	{
		scanf("%d", &k);
		if (!k) {
			printf("%d\n", remove1());
		}
		else
			add(k);
	}
}