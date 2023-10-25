#include <stdio.h>
int main()
{
	float sal = 0;
	while (1) {
		printf("Enter sales in dollars (-1 to end) : ");
		scanf("%f", &sal); if (sal == -1) break;
		printf("Salary is : %.2f\n\n", 200 + sal / 100 * 9);
	}
}
