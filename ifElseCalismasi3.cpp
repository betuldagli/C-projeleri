#include <stdio.h>
#include <stdlib.h>

/* Üç tamsayýyý okuyan ve bu üç tamsayýnýn en küçüðünü bulup ekrana yazdýran bir C Programý    */

int main() {
	int s1,s2,s3,enkucuk;
	
	printf("birinci sayiyi giriniz:");
	 scanf("%d",&s1);
	 
	printf("ikinci sayiyi giriniz:");
	 scanf("%d",&s2);
	 
	printf("ucuncu sayiyi giriniz:");
	 scanf("%d",&s3);
	 
	 if(s1<s2){
	 	enkucuk=s1;
	 }
	 else{
	 	enkucuk=s2;
	 }
	 if(s3<enkucuk){
	 	enkucuk=s3;
	 }
	 	printf("en kucuk sayi:%d",enkucuk);
	return 0;
}
