#include <stdio.h>
#include <stdlib.h>

/* girilen sayinin asal olup olmadiðini bulan fonk*/
  int sayac=0;
  int asalmi(int x){
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			sayac++;
		}
	}
	return x;
}

int main() {
	int sayi;
	
	printf("sayiyi giriniz:");
	 scanf("%d",&sayi);
	 
	 asalmi(sayi);
	 
	 if(sayac==0){
	 	printf("%d sayisi asaldir.",sayi);
	 }
	 else{
	 	printf("%d sayisi asal degildir.",sayi);
	 }
	
	return 0;
}
