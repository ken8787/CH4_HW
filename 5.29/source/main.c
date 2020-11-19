#include<stdlib.h>
#include <stdio.h>
int main(void)
{
	int a, b;
	int ans = 1;
	int i = 2;
	printf(" enter two number\n");
	scanf_s("%d%d", &a,&b);
	if (a == 1 || b == 1)
		printf("ans=%d", a*b);
	else if (a >= i && b >= i)
	{
		while (a%i == 0 && b%i == 0)
		{
			ans = ans * i;
			a /= i;
			b /= i;
		}
		i++;
	}
	printf("ans=%d", ans*a*b);
	system("pause");
	return 0;
}