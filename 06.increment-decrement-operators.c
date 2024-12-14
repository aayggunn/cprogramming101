#include <stdio.h>

int main() {
	int myNumber;
	myNumber=7;
	printf("%d\n", myNumber);
	
	++myNumber;
	printf("%d\n", myNumber);
	
	printf("%d\n", myNumber);
	myNumber++;
	
	myNumber--;
	printf("%d\n", myNumber);
	
	--myNumber;
	printf("%d\n", myNumber);
	
	
	int x, y, z;
	x=5;
	y=2;
	z=9;
	x++;
	// x=6
	++y;
	// y=3
	z--;
	// z=8
	x=y++;
	// x=4 y=4
	x=++y;
	// x=5 y=5
	z=++x;
	// z=6 x==6
	z=y--;
	//z=4 y=4
	z=--y;
	//z==3 y==3
	printf("x: %d\n", x);
	printf("y: %d\n", y);
	printf("z: %d\n", z);
	return 0;
}
