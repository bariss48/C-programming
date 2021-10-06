#include<iostream>

using namespace std;

int main(){
	int toplam=0,sayac=0,n;
	cout << "Bir sayi giriniz: ";
	cin >> n;
	
	for(sayac = 0; sayac <= n; sayac++)
	toplam = toplam + sayac;
	
	cout << "Toplam:  " << toplam;

	return 0;
		
}

