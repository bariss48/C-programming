#include<stdio.h>

int main(){
	
	int i,n,toplam;
	printf("n e kadar olan tek sayilarin toplami:");
	scanf("%d",&n);
	
	
	toplam=0;
	
	for(i=1;i<n;i++){
		
		
		
	   if(i % 2 == 1){
	   	
	   	
	   	toplam = toplam + i;
	   	
	   }
		
		
	
		
	}
	printf("Sonucunuz: %d\n",toplam);
	return 0;
}
