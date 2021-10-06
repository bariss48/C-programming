#include<stdio.h>
#include<conio.h>

int main(){
	
	int islem;
	int bakiye =1000;
	int tutar;
	
	printf("Islemler\n1:para cekme\n2:para yatirma\n3:havale yapma\n4:bakiye sorgulama\n5:kart iade\n\n\n");
	
	printf("Islemi seciniz:");
	scanf("%d",&islem);
	
	switch (islem){
		
		case 1:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekilecek tutar:");
			scanf("%d",&tutar);
			if(tutar > bakiye){
				printf("Bakiye yetersizdir\n");
				
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d",bakiye);
			break;
			
		case 2:
		printf("Bakiyeniz: %d\n",bakiye);
			printf("Yatirilacak tutar:");
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Bakiyeniz: %d",bakiye );
			break;
			
		case 3:
		printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale yapılacak  tutar:");
			scanf("%d",&tutar);
			if(tutar > bakiye){
				printf("Bakiye yetersizdir\n");
				
			}
			bakiye -= tutar;
			printf("Bakiyeniz: %d",bakiye );
			break;
			
		case 4:
		     printf("Bakiyeniz %d",bakiye);
		     break;
		     
		case 5:
		     printf("Kart iade edildi.\n");
		     break;
		     
		default:	
		   	printf("Bilinmeyen islem");
		   	break;
	}
	getch();
	return 0;
}
