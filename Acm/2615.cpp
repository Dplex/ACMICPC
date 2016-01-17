#include <stdio.h>

int data[19][19];

int algo(int x, int y, int xx, int yy) {
	int i;
	for (i = 1; ; i++) {
		if (data[x + i*xx][y + i*yy] != data[x][y])
			break;
		else if (x + i*xx < 0 || x + i*xx >= 19 || y + i*yy < 0 || y + i*yy >= 19)
			break;
		else if (x - xx >= 0 && y - yy >= 0 && data[x - xx][y - yy] == data[x][y])
			return 0;
	}
	if(i==5)
		return 1;
	return 0;
}

int main()
{
	for (int i = 0; i < 19; i++)
		for (int j = 0; j < 19; j++)
			scanf("%d", data[i] + j);
	for (int i = 0; i < 19; i++)
		for (int j = 0; j < 19; j++) {
			if (data[i][j]) {
				int flag = 0;
				if (algo(i, j, -1, 1)) 
					flag = 1;
				else if (algo(i, j, 0, 1)) 
					flag = 1;
				else if (algo(i, j, 1, 1))
					flag = 1;
				else if (algo(i, j, 1, 0))
					flag = 1;
				if (flag) {
					printf("%d\n%d %d\n", data[i][j], i + 1, j + 1);
					return 0;
				}
			}
		}
	printf("0");
}