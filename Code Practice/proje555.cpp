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
    	struct oscar;
    	case 1:
    	int yapimyili;
    	char basrol[35],senarist[35],yonetmen[35],filmismi[35]:
        FILE *fp;
        if((fp = fopen("dosyalar//filmler.txt","w+"))==NULL)
    	printf("Dosya açýlamadý\n");
    	else{
    	printf("Sirasiyla filmin yapimyili basrol senaristi yonetmen filmismi giriniz\n");
		printf("EOF girerek veri giriþini sonlandýrýn\n");
		scanf("%d%s%s%s%s",&yapimyili,&basrol,&senarist,&yonetmen,&filmismi);
		while(!feof(stdin))	{
			fprintf(fp,"%d %s %s %s %s",yapimyili,basrol,senraist,yonetmen,filmismi);
			scanf("%d%s%s%s%s",&yapimyili,&basrol,&senarist,&yonetmen,&filmismi);
			
		}
    		
    	fclose(fp);	
    		
		}
    	
    	break;
    	
    	case 2:
    		FILE *fpa;
    		fpa = fopen("dosyalar/filmler.txt","r+");
    		char isim1[20]:
    		char isim2[20]:
    		while( !feof(fp)){
    			fscanf(fp,"%s%s", &isim1, &isim2);
    			printf("%s\t%s\n",&isim1, &isim2);	
			}
    	fclose(fpa);
    	
    	csae 3:
    		case 4:
    			case 5:
    				break;
    	
    	
    	
	}
 	
 	
 }
