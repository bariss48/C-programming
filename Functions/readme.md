# C - Functions
## if you declare a function you must say a type of function (void,int like) and signature

#### Signature

`
void kalanlar(int numaralar[], int notlar[], int org_sayi);
void gecenler(int notlar[], int nolar[], int ogr_sayi, float ortalama);

`
## body of function // functions can take a different parametres

`void gecenler(int notlar[], int nolar[], int ogr_sayi, float ortalama){
	printf("gecenler() fonksiyonu calisiyor\n");
	for(int i = 0; i < ogr_sayi; i++){
		if(notlar[i] > ortalama){
			printf("Numarasi: %d\tNotu: %d\n", nolar[i], notlar[i]);
		}
	}
}

void kalanlar(int numaralar[], int notlar[], int org_sayi){
	printf("kalanlar() fonksiyonu calisiyor\n");
	for(int i = 0; i < org_sayi; i++){
		if(notlar[i] < 60){
			printf("Orn No: %d\n", numaralar[i]);
		}
	}
}` </br>

## after all of this you can call a function a main() stack

`	gecenler(BNotu, OgrNo, N, ort);
`

