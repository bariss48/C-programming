#include <stdio.h>
#include <math.h>

int main(){
	
 //UYGULAMA 4
	int araSinav[32] = {45,56,34,23,56,88,23,43,12,5,43,10,76,98,67,
		94,65,53,20,43,32,41,76,57,45,32,32,12,33,78,65,65};
		
		//ortalama hesaplama
		float ort;
		int toplam = 0;
		for(int i = 0; i < 32; i++){
			toplam += araSinav[i];
		}
		ort = (float)toplam / 32;
		printf("Ortalama: %.2f\n", ort);
	
		//minimum bulma
		int min = araSinav[0];
		for(int i = 1; i < 32; i++){
			if(araSinav[i] < min)
				min = araSinav[i];
		}
		printf("Min: %d\n", min);
		
		//maxmimum bulma
		int max = araSinav[0];
		for(int i = 1; i < 32; i++){
			if(araSinav[i] > max)
				max = araSinav[i];
		}
		printf("Max %d\n", max);
	
		
		//STANDART SAPMA HESAPLAMA ADIMLAR:
		//    Sayilarin aritmetik ortalamasi hesaplanir.
		//    Her bir sayinin aritmetik ortalamadan farki bulunur.
		//    Bulunan farklarin her birinin karesi hesaplanir.
		//    Farklarin kareleri toplanir.
		//    Elde edilen toplam, serinin eleman sayisinin bir eksigine bölünür.
		//    Bulunan sayinin karekökü alinir.
		
		float karelerToplami = 0;
		for(int i = 0; i < 32; i++){
			float fark = ort - araSinav[i];
			//farkin karelerini topla.
			karelerToplami += (fark * fark);
		}
		//Kök alma islemi sqrt fonksiyonu ile yapilmistir.
		//Bu fonksiyon icin, en ustte #include <math.h> eklenmistir.
		float ss = sqrt(karelerToplami / 31);
		printf("Standart Sapma: %.2f\n", ss);
	
	
	/*
	UYGULAMA 3
	int ekok = 60, para = 0;
	for(int i = 1; ; i++){
		para = (ekok * i + 1);
		if(para % 7 == 0){
			break;
		}
	}
	
	printf("Paraniz: %d\n", para);
	*/
	
	/*
	 UYGULAMA 2
	float tavsan = 845, kus = 1655;
	int yil = 2017;
	//tavsan kustan azken
	while(tavsan < kus){
		tavsan += (tavsan * 4.3) / 100;
		kus += (kus * 1.4) / 100;
		yil++;
	}
	
	printf("Yil: %d\nTavsanlar:%f\nKuslar:%f\n", yil, tavsan, kus);
	*/
	/*
	Soru 1 (yildiz çikartma)
	int deger;
	printf("Bir deger girin:\n");
	scanf("%d", &deger);
	
	for(int i = deger; i > 0; i--){
		for(int j = i; j > 0; j--){
			printf("*");
		}
		printf("\n");
	}
	*/
	/*
	Bubble Sort
	int sayi = 10;
	int dizi[sayi] = {12, 5, 321, 34, 1, 11, 13, 4, 51, -1};
	
	//bubble sort
	for(int i = 0; i < sayi - 1; i++){
		for(int j = 0; j < sayi - i - 1; j++){
			if(dizi[j] > dizi[j + 1]){
				//swap (degistirme)
				int gecici = dizi[j]; 
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = gecici;
			}
		}
	}
	
	for(int k = 0; k < sayi; k++){
		printf("%d\n", dizi[k]);
	}
	*/
}
