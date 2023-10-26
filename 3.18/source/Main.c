#include<stdlib.h>
#include<stdio.h>
int main(void)
{

	float doll, sal;
	do
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &doll);
		if (doll == -1)
		{
			exit;
		}
		else
		{
			sal = doll * 0.09 + 200;
			printf("Salary is: $%.2f\n", sal);
		}
	} while (doll != -1);
	system("pause");
	return 0;
}