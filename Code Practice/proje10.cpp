#include<stdio.h>
#include<stdlib.h>


struct oscar{
                
                char filmismi[20];
                int yapimyili ;
                char basrol[20];
    char yonetmen[20];
    char senarist[20];
};

void menu();
int main(){
                while(1){
                               menu();
                }
                return 0;
}
                
                void menu(){
                               int secim,sayi;
                               printf("1-Film ekle \n 2-Filmleri listele\n 3-film guncelle\n 4-Film sil\n 5- Film ara\n ");
                               printf("Lutfen listeden birini seciniz\n");
                               scanf("%d",&secim);
                
                
                
                
                switch(secim){


                case 1:
                               struct oscar film;
                
                
                               FILE *fp;
                if((fp =fopen("dosyalar//filmler.txt","w"))==NULL)
                printf("Dosya açýlamadý\n");
                else{
                               int yapimyili;
                               printf("sirasiyla filmin yapimyili basrol senarist yonetmen filmismi giriniz\n");
                               printf("EOF girerek veri girisini sonlandýrýn\n");
                               scanf("%d%s%s%s%s",&film.yapimyili,&film.basrol,&film.senarist,&film.yonetmen,&film.filmismi);
while (!feof(stdin)){
                fprintf(fp,"%d%s%s%s%s",film.yapimyili , film.basrol,film.senarist ,film.yonetmen,film.filmismi);
                scanf("%d%s%s%s%s",&film.filmismi,&film.basrol,&film.senarist,&film.yonetmen,&film.filmismi);
}
fclose(fp);
                }
                
                
break;

case 2:
                FILE *fpa;
fpa = fopen("dosyalar/isimler.txt", "r");
                char isim1[20];
                char isim2[20];
                while( !feof(fp) ){
                               fscanf(fp, "%s%s", &isim1, &isim2);
                               printf("%s\t%s\n", &isim1, &isim2);
                }
                fclose(fpa);
                               





                case 3:
                               case 4:
                                               case 5:
                                                               break;
}

}



