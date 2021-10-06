#include<stdio.h>

int main(){
	int fiyat1,fiyat2;
	printf("Fiyat1 i giriniz:");
	scanf("%d",&fiyat1);
	printf("Fiyat2 i giriniz:");
	scanf("%d",&fiyat2);
	 
	 if (70000 < fiyat1&&fiyat1 < 90000){
	 	printf("Mercedes benz satin alabilirsiniz:");	 	
	 }
	 else if (40000< fiyat2&&fiyat2 < 70000){
	 	printf("Ford focus satin alabilirsiniz:");	
   }
	return 0;
}   
