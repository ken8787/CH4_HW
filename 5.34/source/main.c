#include<stdlib.h>
#include <stdio.h>
int power(int x, int y);
int main(void)
{
	int i, j;
	int ans;
	printf("(i,j)\n");
	scanf_s("%d%d", &i,&j);
	ans = power(i, j);
	printf("%dªº%d¦¸¤è=%d\n", i, j, ans);
	system("pause");
	return 0;
}
int power(int x, int y)
{
	int a;
	int result = 1;
	for (a = 1; a <= y; a++)
	{
		result = result * x;
	}
	return result;
}