#include <stdio.h>
#include <stdlib.h>

/* Parametre olarak girilen say�dan k���k olan en b�y�k asal say�y� bulan fonksiyonu yaz�n�z.
int Asal_Sayi_Bul(int sayi);
sayi=23 ise; sonu� olarak 19 (asal say�) d�necektir. */

  int asalsayibul(int sayi){
  	int i,j,eb=0,sayac=0;
  	
  	for(i=2;i<sayi;i++){
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
	 
	 printf("%dden kucuk en buyuk asal sayi:%d",sayi,asalsayibul(sayi));
	return 0;
}
