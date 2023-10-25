#include<stdio.h>

int main()
{
	int cas = 0; float temp1 = 0, temp2 = 0;
	printf("1 : Manager\t\t| 2 : Hourly worker\n");
	printf("3 : Com-mission worker\t| 4 : piece worker\n");
	while (1) {
		printf("\nEnter the code # of worker (-1 to end) : ");
		scanf("%d", &cas); if (cas == -1) break; printf("\n");
		switch (cas)
		{
		case 1:
			printf("Enter weekly rate of the worker ($00.00) : ");
			scanf("%f", &temp1); printf("Salary is $%.2f\n\n", temp1);
			break;
		case 2:
			printf("Enter # of hours worked : "); scanf("%f", &temp1);
			printf("Enter hourly rate of the worker ($00.00) : ");
			scanf("%f", &temp2); printf("Salary is $");
			if (temp1 <= 40) printf("%.2f\n\n", temp1 * temp2);
			else printf("%.2f\n\n", temp1 * temp2 + (temp1 - 40) * temp2 / 2);
			break;
		case 3:
			printf("Enter weekly sales : "); scanf("%f", &temp1);
			printf("Salary is $%.2f\n\n", 250 + temp1 * 0.057);
			break;
		case 4:
			printf("Enter rate of the produce ($00.00) : "); scanf("%f", &temp1);
			printf("Enter how many produce were sold : "); scanf("%f", &temp2);
			printf("Salary is $%.2f\n\n", temp1 * temp2);
			break;
		}
	}
}
