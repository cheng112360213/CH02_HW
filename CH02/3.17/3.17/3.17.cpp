#include <stdio.h>

int main()
{
	int acc; float bal = 0, cha = 0, app = 0, cre = 0;
	while (1) {
		printf("Enter account number (-1 to end) : "); scanf("%d", &acc);

		if (acc == -1) break;

		printf("Enter beginning balance : "); scanf("%f", &bal);
		printf("Enter total charges : "); scanf("%f", &cha);
		printf("Enter total credits : "); scanf("%f", &app);
		printf("Enter credit limit : "); scanf("%f", &cre);

		if (cre < (bal + cha - app)) {
			printf("Account : \t%d\n", acc);
			printf("Credit limite : %.2f\n", cre);
			printf("Balance : \t%.2f\n", bal + cha - app);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}

}