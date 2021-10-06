//BERK BARIÞ KARA
//18253007
#include <stdio.h>
#include <conio.h>
int main(){
char isim[25];
char soyisim[25];
char e_posta[30];
printf("Isminiz:\n");
printf("Soyisminiz:\n");
printf("E_postaniz:\n");
scanf("%s",isim);
scanf("%s",soyisim);
scanf("%s",e_posta);
printf("iyi gunler.Ben %s.Soyadim %s.E_postam %s\n",isim,soyisim,e_posta);

int a,b,k;
printf("Iki sayi giriniz:\n");
scanf("%d %d",&a,&b);
k=a*b;
printf("carpiminiz %d\n",k);

float c,d,g;
printf("iki ondalikli sayi giriniz:\n");
scanf("%f %f",&c,&d);
g=c*d;
printf("esittir %f\n",g);
getch();
return 0;
}

