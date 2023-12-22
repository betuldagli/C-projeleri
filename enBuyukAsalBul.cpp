#include <stdio.h>
#include <stdlib.h>

/*Sayýdan küçük en büyük asal sayýyý bulan fonksiyon*/
  int asalbul(int x){
  	int i,j=1,eb=0,sayac=0;
  	
    for(i=2;i<x;i++){
		for(j=2;j<i;j++){
	      if(i%j==0){
    		sayac++;
         	}
        } 
		if(sayac==0){
         	if(i>eb){
         		eb=i;
         	    }
			}	 
		sayac=0;
	}
	return eb;
  }




int main() {
	int sayi;
	
	printf("sayiyi giriniz:");
	 scanf("%d",&sayi);
	 printf("sayidan kucuk en buyuk asal sayi:%d",asalbul(sayi));
	return 0;
}
