#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char myOperator;
	float number1, number2;
	
	printf("Choose operator (+, -, *, /) : ");
	scanf("%c", &myOperator);
	
	printf("Enter two numbers: ");
	scanf("%f%f", &number1, &number2);
	
	printf("\noperator: %c \nnumber1: %f \nnumber2: %f\n", myOperator, number1, number2);
	
	switch(myOperator){
		case '+':
			printf(" result is %f", number1+number2);
			break;
		case '-':
			printf("result is %f", number1- number2);
			break;
		case '*':
			printf("result is %f", number1*number2);
			break;
		case '/':
			printf("result is %f", number1/number2);
			break;
		default:
			printf("Undefined.");
	}
	return 0;
}
