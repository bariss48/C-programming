#include<stdio.h>


int main(){
	
	int a= 5,*ap;
	float b = 3.2,*bp;
	double c = 3.412,*cp;
	char v ='a',*vp;
	
	int sayilar[5]={1,2,3,4,5};
	
	int *arrayp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	vp = &v;
	
	arrayp= &sayilar[1];
	
	printf("%p adresindeki intin degeri %d dir.\n",ap,*ap);
	printf("%p adresindeki floatin degeri %f dir.\n",bp,*bp);
	printf("%p adresindeki doublein degeri %lf dir.\n",cp,*cp);
	printf("%p adresindeki charin degeri %c dir.\n",vp,*vp);
	printf("%u adresindeki sayilarin elemaninin degeri %d dir.\n",arrayp,*arrayp);
	
	return 0;
}
