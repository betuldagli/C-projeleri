#include <stdio.h>
#include <stdlib.h>

/*ÝKÝ SAYININ EN BUYUK ORTAK KATINI BULAN PROGRAM*/

int main() {
	int i=2,sayi1,sayi2,sonuc,enbuyuk,kontrol;
	
	printf("1.sayiyi giriniz:");
	 scanf("%d",&sayi1);
	 
	
	printf("2.sayiyi giriniz:");
	 scanf("%d",&sayi2); 
	 if(sayi1>sayi2){
	 	enbuyuk=sayi1;
	 }
	 else if(sayi2>sayi1){
	 	enbuyuk=sayi2;
	 }
	 else{
	 	enbuyuk=sayi1;
	 }
	  while(i<=enbuyuk){
	  	kontrol=0;
	  	if(sayi1%i==0){
	  		sayi1/=i;
	  		kontrol++;
		  }
		  if(sayi2%i==0){
	  		sayi2/=i;
	  		kontrol++;
		  }
		  if (kontrol!=0){
		  	sonuc*=i;
		  }
		  if(sayi1%i!=0 && sayi2%i!=0){
		  	i++;
		  }
	  }
	 printf("en kucuk ortak kat: %d",sonuc);
	return 0;
}
