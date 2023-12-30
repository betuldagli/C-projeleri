#include <stdio.h>
#include <stdlib.h>

/*STRUCT YAPISINA GÖRE 10 KÝÞÝLÝK SINIFIN VÝZE ORTALAMASINI HESAPLAYAN PROGRAM*/

  struct ogrenci{
  	char isim[50];
  	char soyisim[50];
  	int vize;
  };


int main(){
    struct ogrenci kisi[10];
    float ort=0;
    int i;
    
    for(i=0;i<10;i++){
    	printf("%d.ogrencinin ismini ve soyismini giriniz:",i+1);
         scanf("%s %s",kisi[i].isim,kisi[i].soyisim);
    	
    	printf("%d.ogrencinin vize notunu giriniz:",i+1);
    	 scanf("%d",&kisi[i].vize);
    	
    	ort+=kisi[i].vize;
    
  	}
    	ort/=10;
    	
    	printf("sinifin vize ortalamasi:%.2f",ort);
    


	return 0;
}
