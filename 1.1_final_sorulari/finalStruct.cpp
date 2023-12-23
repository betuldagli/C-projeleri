#include <stdio.h>
#include <stdlib.h>
/*kullanýcýnýn girdiði vize final ve ders koduna göre sýnýfýn ortalamasýný hesaplayan kod*/
 struct  ogr {
    char ad[40];
    short ders_kod;
	int vize;
	int final;
 };
 
 int main(){
 	struct ogr sinif[100]; 
	 int i,dk,sayac=0;
	 float ort,v=0,f=0;
	 for(i=0;i<3;i++){
	 	printf("%d.ogrencinin adini giriniz:",i+1);
	 	 scanf("%s",sinif[i].ad);
	 	 
	 	printf("%d.ogrencinin ders kodunu giriniz:",i+1);
	 	 scanf("%d",&sinif[i].ders_kod);
	 	 
	 	printf("%d.ogrencinin vizesini giriniz:",i+1);
	 	 scanf("%d",&sinif[i].vize);
	 	 
	 	printf("%d.ogrencinin finalini giriniz:",i+1);
	 	 scanf("%d",&sinif[i].final);
	 }
	 printf("ders kodunu giriniz:");
	  scanf("%d",&dk);
	  
	  for(i=0;i<3;i++){
	  	if(sinif[i].ders_kod==dk){
	  	 sayac++;
		  v+=sinif[i].vize;
		  f+=sinif[i].final;	
		  }
	}
	  v/=sayac;
	  f/=sayac;
	  
	  ort=v*0.4+f*0.6;
	  
	  printf("sinifin ortalamasi:%f",ort);
	  	return 0;
 }
