

 /*
int main(){
	
	int sinir = 10;
	int dizim[sinir] = {a,b,c,d,e,f,g,h,j,k};
	int toplam = 0;
	float ortalama;
	
	for(int i = 0; i < sinir; i++){
		
		toplam += dizim[i];
		
		
	}
	
	printf("%d adet sayinin toplami = %d'dir.",sinir,toplam);
    scanf("")
     

    return 0;
    */
    #include<stdio.h>
    
    int main(){
    	
    	int sayi = 10, toplam = 0;
	int degerler[sayi];
	
	printf("10 tane deger girmeniz gerekiyor.\n");
	for(int i= 0; i < sayi; i++){
		
		
		printf("%d. degeri girin:\n",i + 1);
	scanf("%d", &degerler[i]);
	toplam += degerler[i];
	}
	
	float ortalama = (float) toplam / sayi;
	printf("%d adet degerin ortalamasi = %f",sayi,ortalama);
	
	  return 0;
     }
	
    	
	
	
	
    
	
	
	
	

