#include <stdio.h>

int main(void) {
	int x,y;
	x=7;
	y=4;
	printf("result: %d\n", (x>5 && x<y));
	printf("result: %d\n", (x>5 || x<y));
	printf("result: %d\n", !(x>5 && x<y));
	return 0;
}
