#include<stdio.h>


int main(){
	float toplam=0.0;
	
	int i;
	float sayilar[5];
	for(i=0;i<5;i++){
		
		printf("Bir sayi giriniz:");
		scanf("%f",&sayilar[i]);
	}
	for(i=0; i<5;i++){
		
		toplam = toplam + sayilar[i];
		

	}
	printf("Girdiginiz sayilarin aritmatik ortlamasai %.4f dir.",toplam / 5);
	return 0;
}
