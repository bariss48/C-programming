#include<stdio.h>
#include<conio.h>

int main(){
	
	int  menu;
	int  N;
	int  X;
	int  fact = 1;
	int i;
	int toplam;
	
	printf("Menu\n1:0'dan N'e kadar olan cift sayileri toplama\n2:0'dan N'e kadar X'in katlarini toplama\n3:N faktoriyel hesaplama\n4:Cikis yapma\n\n");
	printf("Menuyu seciniz:");
	scanf("%d",&menu);
	
	switch(menu){
		case 1:
	    printf("Lutfen N sayisini giriniz:");
	    scanf("%d",&N);
	    
	    for(i = 0; i < N ;i++){
	    	if(i % 2 == 0){
	     toplam = i+toplam;
		}
	}
	    printf("%d",toplam);
	    break;
	    case 2:
	    printf("Lutfen N sayisini giriniz:");
	    scanf("%d",&N);
	    printf("Lutfen X sayisini giriniz:");
	    scanf("%d",&X);
	
	    
	    for(i = 0; i < N ;i++){
	    	if(i % X == 0){
	      toplam = toplam+i;
		}
			}
	    printf("%d",toplam); 
	    
	    
	    break;	
	    
	    case 3:
        	printf("Faktoriyel istediðiniz sayiyi giriniz:");
        	scanf("%d",&N);
         	while (N != 0) { 
	    	printf ("%d\n",N);
		    fact = fact *N;
		
	        N--;
	}
	printf("%d",fact);
		    break; 
		case 4:
		printf("Hoscakaliniz:");
		break;
				
		default:
		printf("Bilinmeyen islem:");
		break;
	}
	
	getch();
	
	return 0;
	
	
}
