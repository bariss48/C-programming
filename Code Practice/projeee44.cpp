#include<stdio.h>
#include <stdlib.h>

struct oscar{
	
	char filmismi[20];
	char yonetmen[20];
	char senarist[20];
	int yapimyili;
	char basrol[20];
	
};
 void menu();

 int main(){
 	
 	while(true){
 		
 		menu();
 		
	 }
 	
 	return 0;
 }
 
    void menu(){
	
    int secim, sayi;
    printf("1-Film ekle \n 2-Filmleri listele\n 3-Film guncelle\n 4-Film sil\n 5-Film ara\n");
    printf("Lutfen listeden birini seciniz\n");
    scanf("%d",&secim);
    
    switch(secim){
    	
    	case 1:
    	int yapimyili;
    	char basrol[35],senarist[35],yonetmen[35],filmismi[35];
        FILE *fp;
        if((fp = fopen("dosyalar/filmler1.txt","w+"))==NULL)
    	printf("Dosya açýlamadý\n");
    	int b = 0;
    	
    		
    	else{
    		
    		do{
			
			
    	printf("Sirasiyla filmin yapimyili basrol senaristi yonetmen filmismi giriniz\n");
		printf("EOF girerek veri giriþini sonlandýrýn\n");
		scanf("%d%s%s%s%s",&yapimyili,&basrol,&senarist,&yonetmen,&filmismi);
		
		while(!feof(stdin))	{
			fprintf(fp,"%d %s %s %s %s",yapimyili,basrol,senarist,yonetmen,filmismi);
			scanf("%d%s%s%s%s",&yapimyili,&basrol,&senarist,&yonetmen,&filmismi);
			
		}
		printf("Devam etmek için 1 e çýkmak için 0 a basýnýz: \n");
		int a = scanf("%d",&a);
        if(a == 0){
        	printf("Çýkýþ yaptýnýz: ");
        	b=0;}
        else{
        	
         b = 1;
        
		}
        while(b);
        		

    
    }
    	fclose(fp);	
    		
		}
    	
    	break;
    	
    	case 2:
    		FILE *fpa;
    		fpa = fopen("dosyalar/filmler1.txt","r+");
    		char isim1[20];
    		char isim2[20];
    		while( !feof(fp)){
    			fscanf(fp,"%s%s", &isim1, &isim2);
    			printf("%s\t%s\n",&isim1, &isim2);	
			}
    	fclose(fpa);
    	
    	case 3:
    		case 4:
    			case 5:
    				break;
    	
    	
    	
	}
 	
 	
 }
