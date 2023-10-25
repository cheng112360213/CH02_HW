#include<stdio.h>

int main()
{
	int i = 0, j = 0;
	printf("\n(a)\n\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++)
			printf("%s", "*");
		printf("\n");
	}
	printf("\n(b)\n\n");
	for (i = 0; i < 10; i++) {
		for (j = 10; j > i; j--)
			printf("%s", "*");
		printf("\n");
	}
	printf("\n(c)\n\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < i; j++)
			printf("%s", " ");
		for (j = 10; j > i; j--)
			printf("%s", "*");
		printf("\n");
	}
	printf("\n(d)\n\n");
	for (i = 0; i < 10; i++) {
		for (j = 9; j > i; j--)
			printf("%s", " ");
		for (j = 0; j <= i; j++)
			printf("%s", "*");
		printf("\n");
	}
}