#include <stdio.h>
#include <stdlib.h>

int main(main) {
	int bookPrice, orderQuantity, noDiscountPrice;
	float discountRate, discountPrice, sum;
	bookPrice=20;
	orderQuantity=0;
	printf("How many books do you want to order? ");
	scanf("%d", &orderQuantity);
	if (orderQuantity>=60){
		discountRate= 0.30;
	}
	else{
		if(orderQuantity>=30 && orderQuantity<60){
			discountRate=0.20;
		}
		else if(orderQuantity>=10 && orderQuantity<30){
			discountRate=0.12;
		}
		else{
			discountRate=0.01;
		}
	}
	noDiscountPrice=orderQuantity * bookPrice;
	printf("No discount price is %d $.\n", noDiscountPrice);
	discountPrice=orderQuantity * bookPrice * discountRate;
	printf("Discount price is %f $.\n\n", discountPrice);
	sum=noDiscountPrice - discountPrice;
	printf("Total price is %.2f $. Have a good day.", sum);
	return 0;
}
