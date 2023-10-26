#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int hour;
	float sal, rate;
	do
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf("%d", &hour);
		if (hour == -1)
		{
			exit;
		}
		else
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf("%f", &rate);
			sal = rate * hour;
			printf("Salary is $%.2f\n", sal);
		}
	} while (hour != -1);
	system("pause");
	return 0;
}