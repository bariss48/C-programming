#include<stdio.h>

int main(){
	
	int sayi1,i,a,b;
	a=1;
	b=1;
	printf("sayi1 giriniz: ");
	scanf("%d",&sayi1);
	
	
	for(i=1;i<=sayi1;i++){
		
		sayi1=a+b;
		a=b;
		b=sayi1;
		
		printf("sonucunuz: %d\n",sayi1);
	
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
