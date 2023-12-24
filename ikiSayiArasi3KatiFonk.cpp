#include <stdio.h>
#include <stdlib.h>

/* Parametre olarak verilen iki tam sayý arasýndaki sayýlardan 3’ün katý olan sayýlarýn ortalamasýný bulan 
fonksiyonu yazýnýz.
int Ortalama_Hesapla(int sayi1, int sayi2);
sayi1=4; sayi2=15 ise; 6, 9 ve 12 sayýlarý olacaðý için; Ort: 9 dönecektir. */

  float orthesapla(int x, int y){
  	int i,j,eb,ek;
  	float ort,toplam=0,sayac=0;
  	if(x>y){
  		eb=x;
  		ek=y;
	  }
	  else{
	  	eb=y;
	  	ek=x;
	  }
  	for(i=ek;i<eb;i++){
  		if(i%3==0){
  			toplam+=i;
  			sayac++;
		  }
	  }
	  ort=toplam/sayac;
  	return ort;
  }

int main() {
	int x,y;
	
	printf("ilk sayiyi giriniz:");
	 scanf("%d",&x);
	 
	printf("ikinci sayiyi giriniz:");
	 scanf("%d",&y);
	 
    printf("%.2f",orthesapla(x,y));	
	 
	return 0;
}
