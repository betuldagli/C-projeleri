#include <stdio.h>
#include <stdlib.h>

/* �� tamsay�y� okuyan ve bu �� tamsay�n�n en k�����n� bulup ekrana yazd�ran bir C Program�    */

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
