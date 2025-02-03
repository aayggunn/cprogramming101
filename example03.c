#include <stdio.h>
#include <stdlib.h>

void basamakHesapla (int sayi){
	int basamakSayisi = 0;
	while(sayi>0){
		sayi=sayi/10;
		basamakSayisi++;
	}
	printf("Bu sayi %d basamaklidir\n", basamakSayisi);
}

int main() {
	int sayi;
	printf("Bir tam sayi giriniz: (Cikis icin 0 giriniz) \n");
	while(1){
		printf("Sayi: ");
		scanf("%d", &sayi);
		if(sayi==0){
			printf("Program sonlandiriliyor.");
			break;
		}
		if(sayi > 0) basamakHesapla(sayi);
		else printf("Lutfen pozitif sayi giriniz. \n");
	}
	return 0;
}
