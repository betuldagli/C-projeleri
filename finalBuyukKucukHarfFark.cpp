#include <stdio.h>
#include <stdlib.h>

/* parametre olarak metni al�p metindeki b�y�k harf say�s� ve k���k harf say�s�n�n fark�n� g�nderen fonk*/

 int fark(char metin[]){
 	int i,sayac=0,sayac1=0,sonuc;
 	
 	for(i=0;metin[i]!='\0';i++){
 		if(metin[i]>='A'&&metin[i]<='Z'){
 			sayac++;
		 }
		 if(metin[i]>='a'&&metin[i]<='z'){
 			sayac1++;
		 }
	 }
	 sonuc=sayac-sayac1;
	 if(sonuc<0){
	 	sonuc*=-1;
	 }
	 return sonuc;
 }

int main() {
	char metin[50];
	int i;
	
	printf("metni giriniz:");
	gets(metin);
	
	fark(metin);
	
	printf("fark:%d",fark(metin));
	return 0;
}
