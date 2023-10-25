#include<stdio.h>

int main()
{
	int i = 0, j = 0;
	for (i = 0; i < 5; i++) {
		for (j = 4; j > i; j--)
			printf(" ");
		for (j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 4; i > 0; i--) {
		for (j = 5; j > i; j--)
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
}