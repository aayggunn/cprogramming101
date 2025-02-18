#include <stdio.h>

void myMessage(){
	printf("It is a function\n");
}
void nameList(char name[]){
	printf("Hello %s\n", name);
}

int main() {
	myMessage();
	nameList("Aygun");
	return 0;
}
