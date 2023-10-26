#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int day;
	float rate, pri, charge;
	do
	{
		printf("Enter loan principal(-1 to end):");
		scanf("%f", &pri);
		if (pri == -1)
		{
			exit;
		}
		else
		{
			printf("Enter interest rate:");
			scanf("%f", &rate);
			printf("Enter term of the loan in days:");
			scanf("%d", &day);
			charge = pri * rate*day / 365;
			printf("The interest charge is $%.2f\n", charge);
		}
	} while (pri != -1);
	system("pause");
	return 0;
}