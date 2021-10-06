#include<stdio.h>


int main(){
	
	
	int i = 5;
	
	int *p = &i;
	
	printf("%p\n",p);
	
	printf("%d",*p);
	
	// pointer 2 byte int 4 byte printf in içine p veya u da yazabiliriz & ampersant değişkenin adresini veriyor '*' işareti ise adresdeki değeri alıyor.//	
	
	return 0;
}
