#include <stdio.h>

int main(void) {
	float pressure, constantR;
	int numberofMoles, volume, heat;
	constantR= 0.82;
	
	printf("Enter the volume of the container: ");
	scanf("%d", &volume);
	printf("Enter the number of the moles: ");
	scanf("%d", &numberofMoles);
	printf("Enter the heat: ");
	scanf("%d", &heat);
	
	pressure = (numberofMoles*constantR*heat) / volume;
	
	printf("Pressure of the gas in the container: %f", pressure);
	return 0;
}
