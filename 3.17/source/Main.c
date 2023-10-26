#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	int number, end;
	float bal, charges, cred, lim, x;
	do
	{
		printf("Enter account number(-1 to end):");
		scanf("%d", &number);
		if (number == -1)
		{
			exit;
		}
		else
		{
			printf("Enter beginning balance:");
			scanf("%f", &bal);
			printf("Enter total charges:");
			scanf("%f", &charges);
			printf("Enter total credits:");
			scanf("%f", &cred);
			printf("Enter credit limit:");
			scanf("%f", &lim);
			x = bal + charges - cred;
			if (x > lim)
			{
				printf("Account:%d\n", number);
				printf("Credit Limit:%.2f\n", lim);
				printf("Balance:%.2f\n", x);
				printf("Credit Limit Exceeded.\n");
			}
		}
	} while (number != -1);
	system("pause");
	return 0;
}