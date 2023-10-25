#include<stdio.h>

int main()
{
	int len = 0, bre = 0, i = 0, j = 0;
	printf("Enter the length : "); scanf("%d", &len);
	printf("Enter the breadth : "); scanf("%d", &bre);
	for (i = 0; i < bre; i++) printf("*"); printf("\n");
	for (i = 0; i < len - 2; i++) {
		printf("*");
		for (j = 0; j < bre - 2; j++) printf(" ");
		printf("*\n");
	}
	for (i = 0; i < bre; i++) printf("*"); printf("\n");
}