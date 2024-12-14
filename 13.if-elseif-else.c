#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int myNumber;
	printf("Enter your number: ");
	scanf("%d", &myNumber);
	if(myNumber>0){
		if(myNumber==100){
			printf("This is incredible\n\n");
		}
		else{
			printf("This is not incredible\n\n");
		}
		printf("It is positive number");
	}
	else if(myNumber<0){
		printf("It is negative number");
	}
	else{
		printf("It is zero");
	}	
	return 0;
}
