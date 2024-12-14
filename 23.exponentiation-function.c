#include <stdio.h>
#include <stdlib.h>

float exponention (float x, int y);

int main() {
	float base = 0;
	float result = 0;
	int exponent = 0;
	printf("Enter base and exponent values: \n");
	scanf("%f%d", &base, &exponent);
	result = exponention(base, exponent);
	printf("Result: %f\n", result);
	return 0;
}

float exponention(float x, int y){
	float result = 1;
	int i;
	if(y<0){
		for(i=0; i<-y; i++){
			result *= 1/x;		}
	}
	else{
		for(i=0; i<y; i++){
			result *= x;
		}
	}
	return result;	
}
