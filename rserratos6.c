// Raquel Serratos

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void){
	double x = 3.0;
	double y = 4.0;
	double result = 0;

	result = x+y*x/y-x;

	printf("First result using double: %lf \n", result);

	int w = 3;
	int v = 4;

	result = w+v*w/v-w;

	printf("Second result using int: %lf \n", result);
	
	result = -x-y/x*y+x;

	printf("\nFirst result using double: %lf \n", result);

	result = -w-v/w*v+w;

	printf("Second result using int: %lf \n", result);

	result = x+y-x/y;

	printf("\nFirst result using double: %lf \n", result);

	result = w+v-w/v;

	printf("Second result using double: %lf \n", result);

	return EXIT_SUCCESS;
}
