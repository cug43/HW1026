#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int i, j, x, t = 2;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5 + 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 5 - 1; i >= 1; i--)
	{
		for (j = 1; j <= 5 + 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}