#include<stdio.h>

int fact(int sayi){
	
	int fact=1;
	
	
	for (;sayi > 0 ; sayi--){
		
		
		fact = sayi * fact;
		
	}
	
	
	return fact;
	
	
}


int main(){
	
	int n;
	printf("Faktoriyelini istediginiz sayiyi giriniz: ");
	
	scanf("%d",&n);
	
	printf("%d",fact(n));
	
	
	
	
	
	return 0;
}
