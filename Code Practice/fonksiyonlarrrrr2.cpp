#include<stdio.h>

   void hata(int hata1){
   	
   	printf("Hata kodu %d",hata1);
   	
   	
   }


int main(){
	
	int sayi;
	printf("Negatif sayi girmeyiniz: ");
	scanf("%d",&sayi);
	
	if(sayi < 0){
		
		
		hata(404);
		
	
	}
	else{
		
		printf("sayi sayiniz budur");
	}
	
	
	
	return 0;
}
