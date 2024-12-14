#include <stdio.h>

void useLocal();
void useStaticLocal();
void useGlobal();

int x = 1; /* global variable */

int main(void) {
	int x = 5; /* local variable to main */
	printf("Local x in outer scope of main is %d\n", x);
	{
		int x = 7; /* local variable to new scope */
		printf("Local x in inner scope of main is %d\n", x);
	}
	printf("Local x in outer scope of main is %d\n", x);
	
	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();
	printf("\nLocal x in main is %d\n", x);
	return 0;
}

void useLocal( void ){
	int x = 25;
	printf("\nLocal x in useLocal is %d after entering useLocal\n", x);
	x++;
	printf("Local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal( void ){
	static int x = 50;
	printf("\nLocal static x is %d on entering useStaticLocal\n", x);
	x++;
	printf("Local static x is %d on exiting useStaticLocal\n", x);
}

void useGlobal( void ){
	printf("\nGlobal x is %d on entering useGlobal\n", x);
	x *= 10;
	printf("Global x is %d on exiting useGlobal\n", x);
}
