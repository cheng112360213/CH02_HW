#include<stdio.h>

int main()
{
	float pri = 0, rat = 0, day = 0;
	while (1) {
		printf("Enter loan principal (-1 to end) : ");
		scanf("%f", &pri); if (pri == -1) break;
		printf("Enter interest rate : "); scanf("%f", &rat);
		printf("Enter term of the loan in days : "); scanf("%f", &day);
		printf("The interest charge is $%.2f\n\n", pri * rat * day / 365);
	}
}
