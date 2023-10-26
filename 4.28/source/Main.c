#include<stdlib.h>
#include<stdio.h>
int main() {
	int payCode, hoursWorked, piecesProduced;
	double fixedSalary, hourlyWage, grossWeeklySales, pieceRate;
	while (1) {
		printf("Enter the employee's pay code (1 = Manager, 2 = Hourly, 3 = Commission, 4 = Pieceworker, -1 to exit): ");
		scanf("%d", &payCode);

		if (payCode == -1)
		{
			break;
		}

		double weeklyPay = 0.0;

		switch (payCode) {
		case 1:
			printf("Enter the fixed weekly salary for the manager: $");
			scanf("%lf", &fixedSalary);
			weeklyPay = fixedSalary;
			break;

		case 2:
			printf("Enter the hourly wage for the hourly worker: $");
			scanf("%lf", &hourlyWage);
			printf("Enter the number of hours worked: ");
			scanf("%d", &hoursWorked);
			if (hoursWorked <= 40)
			{
				weeklyPay = hourlyWage * hoursWorked;
			}
			else
			{
				weeklyPay = hourlyWage * 40 + 1.5 * hourlyWage * (hoursWorked - 40);
			}
			break;

		case 3:
			printf("Enter the gross weekly sales for the commission worker: $");
			scanf("%lf", &grossWeeklySales);
			weeklyPay = 250.0 + 0.057 * grossWeeklySales;
			break;

		case 4:
			printf("Enter the piece rate for the pieceworker: $");
			scanf("%lf", &pieceRate);
			printf("Enter the number of pieces produced: ");
			scanf("%d", &piecesProduced);
			weeklyPay = pieceRate * piecesProduced;
			break;

		default:
			printf("Invalid pay code. Please enter a valid pay code.\n");
			continue;
		}
		printf("Weekly pay: $%.2lf\n", weeklyPay);
	}
	return 0;
}
