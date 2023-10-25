#include<stdio.h>
#include<math.h>

int main()
{
	printf("You have $5000, and you put into the bank for 15 years.\n");
	printf("So this is your asset later, when the rate is...\n");
	for (double r = 1.1; r <= 1.12; r += 0.005)
		printf("%.1lf : \t%.2lf\n", (r - 1) * 100, 5000 * pow(r, 15));
}