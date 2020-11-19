#include<stdlib.h>
#include <stdio.h>
int main(void)
{
	char b;

	printf("Enter a alphabet");
	scanf_s("%c", &b);
	printf("%c", (char)b + 32);

	return 0;
}