#include<stdio.h>

int main(){
	
	int fact=1;
	int i,sayi;
	printf("Faktoriyel istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		
		fact=fact*i;
		
	}
	printf("fact= %d",fact);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
