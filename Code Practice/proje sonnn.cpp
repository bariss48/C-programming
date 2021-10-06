#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define size 25

struct film_bilgileri{
                char film_adi[size];
                char yonetmen[size];
                char basrol[size];
                char senarist[size];
                int yil;
}filmler;

int Menu();
void filmEkle();
void film_sil();
void filmListele();
int main()
{
                printf("+++++++++++++++++++++++++++++++FÝLM ARSÝVLEME SÝSTEMÝ++++++++++++++++++++++++++++++\n\n");
                Menu();
    getch();
    return 0;
}
int Menu()
{
     char Tercih = 'r';
     printf("\n");
                printf(" Film Ekle-->1\n Filmleri Listele-->2\n Film Güncelle-->3\n Film Sil-->4\n Film Ara-->5\n Programdan Çýk-->E\n"); 
     Tercih = getche();
     while(Tercih != 'E' || Tercih != 'e') {
          switch(Tercih)
          {
                        case '1': {filmEkle();break;}
                        case '2': {filmListele();break;}
                        case '3': {break;}
                        case '4': {film_sil();break;}
                        case '5': {break;}
                                                                                              
                                                                                              
                                                                                              
          }
          printf("\nBaþka iþlem yapmak istiyor musunuz(E/H)?\n");
          Tercih = getche();
          if(Tercih == 'H' || Tercih == 'h') {
                    break;
          }
          if(Tercih == 'E' || Tercih== 'e'){
               return Menu();
                                 }
     }
}
void filmEkle()
{
                FILE *fp;
                fp = fopen("filmveritabaný.dat","a");
                printf("\nfilm adýný,baþrolü,senaristi,yönetmeni ve yayýnlanma yýlýný giriniz:\n");
                fflush(stdin);
                gets(filmler.film_adi);
                gets(filmler.basrol);
                gets(filmler.senarist);
                gets(filmler.yonetmen);
                fflush(stdin);
                scanf("%d",&filmler.yil);
                
                fwrite(&filmler,sizeof(film_bilgileri),1,fp);
                fseek(fp,0,SEEK_SET);
                fclose(fp);
                return;
}
void film_sil(){
     char filmad_temp[30];
     FILE *FilmDB;
     FILE *TempFilmDB;
     printf("\nSilmek istediðiniz filmin adýný giriniz: \n");
     scanf("%s", &filmad_temp);
     // Dosyadaki bütün kayýtlar taranýr ve silinmesini istediðimiz kayýt atlanarak geçici bir dosyaya, silinecek kayýt dýþýndakilerin hepsi yazýlýr. 
     FilmDB = fopen("filmveritabaný.dat","r");
     TempFilmDB = fopen("TempFile.dat","a");
    
     while(!feof(FilmDB))
     {
            fread(&filmler, sizeof(film_bilgileri),1,FilmDB);
            if(&filmler != NULL)
            {
                if(strcmp(filmler.film_adi,filmad_temp))
                {
                    fwrite(&filmler, sizeof(film_bilgileri),1,TempFilmDB);    
                }
                else if(strcmp(filmler.film_adi,filmad_temp))
                {
                    
                }
            }
     }printf("\nFilm baþarýyla silindi!\n");
     fclose(FilmDB);
     fclose(TempFilmDB);
     // Dosya silinir.
     remove("filmveritabaný.dat");
     // geçici dosyanýn ismi asýl dosya ismi deðiþtirilir.
     rename("TempFile.dat","filmveritabaný.dat");
}

void filmListele(){
                struct film_bilgileri gecici;
                FILE *filmDosya;
                filmDosya = fopen("filmveritabaný.dat","r");
                struct film_bilgileri filmler[size] = {"","","","",0};
                int i = 0;
                if(filmDosya == NULL)
                {              printf("Dosya acilamadi.\n");
                return;
                }
                else{
                               while(fread(&filmler[i],sizeof(film_bilgileri),1,filmDosya))
                               { i++;
                               }
                for(i = 0; i < 24; i++){      //Bubble sort ile filmler yayinlanma yillarina gore listeleniyor.
                               for(int j = 0; j < 24-i; j++){
                                               if(filmler[j+1].yil > filmler[j].yil){
                                                               gecici = filmler[j];
                                                               filmler[j] = filmler[j+1];
                                                               filmler[j+1] = gecici;

                                                               }
                                               }
                               }

                for (i = 0; i < 25; i++){
                               if(filmler[i].yil == 0 ){
                                               }
                               else{
                               printf("%s\t\t%s\t\t%s\t\t%s\t\t%4d\n",filmler[i].film_adi,filmler[i].basrol,filmler[i].yonetmen,filmler[i].senarist,filmler[i].yil);
                                               }
                               }
                }
rewind(filmDosya); // imleci dosya basýna yolladým
fclose(filmDosya);
printf("\n");
return;
}

