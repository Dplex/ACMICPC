#include <stdio.h>
long long min(long long a, long long b) {
	return a > b ? b : a;
}
int main()
{
	int cnt = 1;
	while (1) {
		int N;
		scanf("%d", &N);
		if (!N)
			break;
		long long data[3] = { 0, };
		long long pre[3] = { 0, };
		scanf("%lld %lld %lld", pre, pre+1, pre+2);
		data[1] = pre[1]; 
		data[0] = data[1];
		data[2] = data[1] + pre[2];
		for (int i = 1; i < N; i++) {
			scanf("%lld %lld %lld", pre, pre + 1, pre + 2);
			pre[0] += min(data[0], data[1]);
			pre[1] += min(data[0], min(data[1], min(pre[0], data[2])));
			pre[2] += min(data[1], min(pre[1], data[2]));
			data[0] = pre[0]; data[1] = pre[1]; data[2] = pre[2];
		}
		printf("%d. %lld\n", cnt++, data[1]);
	}

}