#include <stdio.h>

int main(void) {
	int myNumber, sum, bolum, kalan;
	sum=0;
	printf("Enter a number: ");
	scanf("%d", &myNumber);
	
	bolum=myNumber /1000;
	sum += bolum;
	kalan = myNumber % 1000;
	
	bolum = kalan /100;
	sum += bolum;
	kalan = kalan % 100;
	
	bolum = kalan /10;
	sum += bolum;
	kalan = kalan %10;
	sum += kalan;
	
	printf("The sum of the digits of the 4-digit number you entered: %d", sum);
	return 0;
}
