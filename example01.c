#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void area(double a);

int main(void) {
	double y;
	printf("Enter the radius: ");
	scanf("%lf", &y);
	area(y);
	getch();
	return 0;
}

void area(double a){
	double result;
	result=PI*a*a;
	printf("Area: %5.2lf", result);
}
