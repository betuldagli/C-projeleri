#include <stdio.h>
#include <stdlib.h>

/*  Girilen deðer s1 deðiþkenine atanýyor. if satýrýnda s1 deðiþken deðerinin tek sayý olup olmadýðý konrolü yapýlýr.
 Tek bir sayý ise if koþuluna baðlý olarak tanýmlanmýþ kod bloðu içindeki karakter dizisini ve deðiþken deðerinin 
 3 katýný hesaplayarak ekrana yazar. Sayý çift ise else satýrýna baðlý olarak tanýmlanmýþ kod bloðu içindeki karakter dizisini ve deðiþken
  deðerinin 2 katýný hesaplayarak ekrana yazar.*/

int main() {
	int s1;
	
	printf("bir sayi giriniz:");
	 scanf("%d",&s1);
	 
	 if (s1%2==1){
	 printf("girilen sayi tektir\n");
	 	printf("sayinin 3 kati:%d",s1*3);
	 }
	 else{
	 	printf("girilen sayi cifttir\n");
	 	printf("sayinin iki kati:%d",s1*2);
	 }
	return 0;
}
