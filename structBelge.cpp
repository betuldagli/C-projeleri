#include <stdio.h>
#include <stdlib.h>


/*STRUCT YAPISINA GÖRE KULLANICIDAN ALINAN BÝLGÝLERÝ DOLDURAN VE EÐER ORTALAMASI 3 TEN YÜKSEKSE BELGE ALMAYA HAK KAZANDINIZ YAZAN PROGRAM
*/

  struct ogrenci{
  	char isim[50];
  	char soyisim[50];
  	float ortalama;
  }kisi;



int main() {
	
	printf("isminizi soyisminizi giriniz:");
	 scanf("%s %s",kisi.isim,kisi.soyisim);
	 
	 printf("ortalamanizi giriniz:");
	 scanf("%f",&kisi.ortalama);
	 
	 if(kisi.ortalama>3 && kisi.ortalama<=4){
	 	printf("BELGE ALMAYA HAK KAZANDINIZ.");
	 }
	 else if(kisi.ortalama>4){
	 	printf("gecerli ortalama giriniz.");
	 }
	 else{
	 		printf("BELGE ALAMADINIZ.");
	 }
	return 0;
}
