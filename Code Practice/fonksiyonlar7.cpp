#include<stdio.h>
#include<string.h>

int uzunlukdon(char name[]){
	
	int uzunluk=0;
	int i;
	for(i=0;name[i] != '\0';i++){
		
		uzunluk++;
		
		
	}
	return uzunluk;

}

int main(){
	
	
	char isim[]="Baris";
	
	printf("%d",uzunlukdon(isim));
	
	return 0;
}



// sadece char fonksiyonunda \0 yani null ile biter //
