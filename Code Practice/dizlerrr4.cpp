#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi = 20;
	int degerler[sayi];
	
	for(int i = 0; i < sayi; i++){
	degerler[i] = rand() % 100;
	printf("%d. deger: %d\n", i + 1,degerler[i]);
	
		
		
		
	}
	int min = degerler[0];
	for (int i  = 1; i < sayi; i++){
		if(degerler[i] < min)
		min = degerler[i];
		
		
	}
	printf("Minimum degeriniz:%d", min);
	
	return 0;
	
	
	
	
}
