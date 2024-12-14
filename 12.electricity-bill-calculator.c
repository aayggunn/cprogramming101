#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	float bill, formerUnitPrice, newUnitPrice;
	float inflation, formerSubscriberFee, newSubscriberFee;
	int formerMeterValue, newMeterValue, totalConsumedElectricity;
	
	printf("Enter the inflation rate: ");
	scanf("%f", &inflation);
	printf("Enter the unit electricity price for the previous month: ");
	scanf("%f", &formerUnitPrice);
	printf("Enter the subscriber fee for the previous month: ");
	scanf("%f", &formerSubscriberFee);
	printf("Enter the meter value for the previous month: ");
	scanf("%d", &formerMeterValue);
	printf("Enter the meter value for the this month: ");
	scanf("%d", &newMeterValue);
	
	totalConsumedElectricity = newMeterValue - formerMeterValue;
	newUnitPrice = formerUnitPrice * (1+inflation/100);
	newSubscriberFee = formerSubscriberFee * (1+inflation/100);
	bill = totalConsumedElectricity * newUnitPrice + newSubscriberFee;
	
	printf("\nThe amount of the bill you have to pay this month: %f", bill);
	return 0;
}
