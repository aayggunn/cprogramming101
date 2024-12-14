#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i;
	
	for(i=1; i<=10; i++){
		if(i==5){
			printf("Skip 5.\n");
			continue;
		}
		if(i==8){
			printf("Loop stop at 8.\n");
			break;
		}
		printf("%d\n",i);
	}
	
	printf("\n\n");
	
	i=1;
	while(i<=10){
		if(i==6){
			printf("Skip 6.\n");
			i++;
			continue;
		}
		if(i==9){
			printf("Loop stop at 9.\n");
			break;
		}
		printf("%d\n",i);
		i++;
	}
	printf("\n\n");
	
	i=1;
	do{
		if(i==2){
			i++;
			continue;
		}
		printf("%d\n",i);
		i++;
	}
	while(i<=10);
	return 0;
}
