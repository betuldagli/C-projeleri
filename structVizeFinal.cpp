#include <stdio.h>
#include <stdlib.h>

/* ���NE PARAMETRE OLARAK STRUCT ALAN VE 10 K���L�K SINIFTA K���YE G�RE V�ZE VE F�NAL SINAVLARININ ORTALAMASINI EKRANA YAZDIRAN FONKS�YON */

  struct ogrenci{
  	int vize;
  	int final;
  };
  
  struct ogrenci kisi[10];

 void yazdir(struct ogrenci kisi[10]){
 		float ort;
 		int n;
 			printf("kacinci ogrencinin ortalamasini gormek istediginizi girin:");
		 scanf("%d",&n);
		 
		ort=kisi[n-1].vize*0.4+kisi[n-1].final*0.6;
		
		printf("%d.ogrencinin ortalamasi:%.2f",n,ort);
 }


int main() {

	int i,n;

	for(i=0;i<10;i++){
		printf("%d.ogrencinin vize notunu giriniz:",i+1);
		 scanf("%d",&kisi[i].vize);
		 
		 printf("%d.ogrencinin final notunu giriniz:",i+1);
		 scanf("%d",&kisi[i].final);
		 printf("\n");
		}
		yazdir(kisi);
		
	
	return 0;
}
