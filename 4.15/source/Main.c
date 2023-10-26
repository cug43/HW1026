#include <stdio.h>
#include <stdlib.h>
int main() {
	double inv = 5000, r1 = 5000, r2 = 5000, r3 = 5000, r4 = 5000, r5 = 5000;
	int year, i;
	printf("year%10.1f%% %9.1f%% %9.1f%% %9.1f%% %9.1f%%\n", 10.0, 10.5, 11.0, 11.5, 12.0);
	for (year = 1; year <= 15; year++)
	{
		r1 = 5000;
		r2 = 5000;
		r3 = 5000;
		r4 = 5000;
		r5 = 5000;
		for (i = 1; i <= year; i++)
		{
			r1 = r1 * 1.1;
			r2 = r2 * 1.105;
			r3 = r3 * 1.11;
			r4 = r4 * 1.115;
			r5 = r5 * 1.12;
		}
		printf("%4d %10.2f %10.2f %10.2f %10.2f %10.2f\n", year, r1, r2, r3, r4, r5);
	}
	system("pause");
	return 0;
}