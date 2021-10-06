#include<stdio.h>

int main(){
	
	int sayi = 10;
	int dizi[10] = {5,3,9,15,17,23,87,16,34,18}
	
	
	for(int i = 0, i < sayi - 1; i++){
		for(int j = 0; j < sayi -i -1,j++){
			if(dizi[j] > dizi[i + 1]){
				int gecici = dizi[i];
				dizi[j] = dizi[i+1];
				dizi[j + 1] = gecici;
					
			}
			
			
		}
		
	}
	for(int k = 0; k < sayi; k++){
		printf("%d\n", dizi[k1]);
		
		
		return 0;
		
	}


	
	
	
	
	
	
	
	
	
	
	
}
