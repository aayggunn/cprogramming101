#include <stdio.h>
#include <stdlib.h>

int ilk(int a);
int son(int b);

int main() {
	int x;
	printf("4 basamakli bir sayi giriniz: ");
	scanf("%d", &x);
	int ilkiki = ilk(x);
	int soniki = son(x);
	int sonuc = ilkiki + soniki;
	if (sonuc*sonuc == x) printf("Sarti sagliyor");
	else printf("Sarti saglamiyor");
	return 0;
}

int ilk(int a){
	int ilk = (a - (a % 100)) / 100;
	return ilk;
}

int son(int b){
	int son = b % 100;
	return son;
}
