#include <stdio.h>
#include<stdlib.h>
int main()
{
	int n[8] = { 0 };
	int g[8] = { 0 };
	int he[8][1];
	for (int i = 0; i < 8; i++)
	{
		he[i][0] = 1;
	}
	int count = 0;

	//-------------------------------------------------------------------------------
	while (1)
	{
		n[0]++;
		count++;

		for (int i = 0; i < 8; i++)
		{
			if (n[i] > 1)
			{
				n[i + 1]++;
				n[i] = 0;
			}
		}

		for (int i = 0; i < 8; i++)
		{
			printf("%d", n[i]);
		}
		printf("\n");
		for (int i = 0; i < 8; i++)
		{
			if (n[i] > g[i])
			{
				int p;
				p = count % 3;
				if (p == 1)
				{
					if (he[i][0] == 1)
					{
						printf("%d move from A to B", i + 1);
						he[i][0] = 2;
						break;
					}
					if (he[i][0] == 2)
					{
						printf("%d move from B to A", i + 1);
						he[i][0] = 1;
						break;
					}
				}
				if (p == 2)
				{
					if (he[i][0] == 1)
					{
						printf("%d move from A to C", i + 1);
						he[i][0] = 3;
						break;
					}
					if (he[i][0] == 3)
					{
						printf("%d move from C to A", i + 1);
						he[i][0] = 1;
						break;
					}
				}
				if (p == 0)
				{
					if (he[i][0] == 2)
					{
						printf("%d move from B to C", i + 1);
						he[i][0] = 3;
						break;
					}
					if (he[i][0] == 3)
					{
						printf("%d move from C to B", i + 1);
						he[i][0] = 2;
						break;
					}
				}
			}

		}
		for (int i = 0; i < 8; i++)
		{
			g[i] = n[i];
		}
		//printf(" %d", count);
		printf("\n");
		if (count == 127)
		{
			break;
		}
	}
	system("pause");
	return 0;
}
