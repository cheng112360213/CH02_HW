#include<stdio.h>
#include<math.h>

int main()
{
	double temp = 0;
	for (int i = 1; i <= 500; i++) {
		for (int j = i; j <= 500; j++) {
			temp = pow(pow(i, 2) + pow(j, 2), 0.5);
			if (temp == (int)temp && temp <= 500)
				printf("%3d\t%3d\t%3.0lf\n", i, j, temp);
		}
	}
}