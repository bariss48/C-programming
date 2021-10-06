#include<stdio.h>

int main(){
	
	int a;
	int b;
	int c;
	int i;
	int sayi;
	a=1;
	b=1;
	
	printf("Istediginiz sayiyi giriniz: ");
	scanf("%d",&sayi);
	
	printf("%d\n%d\n",a,b);
	
	for(i=0;i<sayi;i++){
		
	c=a+b;
	a=b;
	b=c;
	
		
	
	
		printf("%d\n",c);
	
		
	}
	return 0;
}
