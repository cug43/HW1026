#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int i, j;
	for (j = 1; j <= 3; j++)
	{
		if (j == 1 || j == 3)
		{
			for (i = 1; i <= 12; i++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			printf("*");
			for (i = 2; i <= 11; i++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	system("pause");
	return 0;
}