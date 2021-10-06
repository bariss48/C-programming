#include<stdio.h>

int main(){
	int bosluk;
	int x;
	int i;
	int j;
	int yildiz;
	yildiz = 1;
	printf("X i gir:");
	scanf("%d",&x);
	
	bosluk = x - 1;
	
	for(j=6;j>1;j--){
		
			for(i=0;i<bosluk;i++){
				
				printf(".");
				
			}
		
		    for(i=0;i<yildiz;i++){
			
			
		printf("*");
	                }
		
	
		printf("\n");
		yildiz++;
		bosluk--;
		
	}
		printf("%d",x);
		
	

	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
