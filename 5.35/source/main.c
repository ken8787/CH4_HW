#include<stdlib.h>
#include <stdio.h>
int fibonacci(int x);
int main(void)
{
	int i,ans;
	printf("��J��N��\n");
	scanf_s("%d", &i);
	ans = fibonacci(i);
	printf("��%d���O%d",i,ans);
	system("pause");
	return 0;
}
int fibonacci(int x)
{
	int a,result,b;
	result = 0;
	b = 1;
	if (x > 1)
	{
		result = fibonacci(x - 1) + fibonacci(x - 2);
	}
	else if (x == 1)
		result = 1;
	else
		result = 0;
	return result;
}