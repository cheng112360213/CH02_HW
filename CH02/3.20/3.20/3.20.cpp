#include<stdio.h>

int main()
{
	float hou = 0, rat = 0;
	while (1) {
		printf("Enter # of hours worked (-1 to end) : ");
		scanf("%f", &hou); if (hou == -1) break;
		printf("Enter hourly rate of the worker ($00.00) : ");
		scanf("%f", &rat); printf("Salary is $");
		if (hou <= 40) printf("%.2f\n\n", hou * rat);
		else printf("%.2f\n\n", hou * rat + (hou - 40) * rat / 2);
	}
}