#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int i, j;
	printf("(A)\n");
	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i <= j; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i <= 11 - j; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i <= j - 1; i++)
		{
			printf(" ");
		}
		for (i = 1; i <= 11 - j; i++)
		{

			printf("*");
		}
		printf("\n");
	}
	printf("(D)\n");
	for (j = 1; j <= 10; j++)
	{
		for (i = 1; i <= 11 - j; i++)
		{
			printf(" ");
		}
		for (i = 1; i <= j - 1; i++)
		{

			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}