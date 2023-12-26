#include <stdio.h>
#include <stdlib.h>

/* . Parametre olarak verilen bir string içindeki yine parametre olarak verilen string yerine yeni string ile 
deðiþtiren ve oluþan yeni stringi döndüren fonksiyonu yazýnýz. “yazilimcilar yazilim yazar yaz 
aylarinda”, “yaz”, “ABCD” “ABCDilimcilar ABCDilim yABCDar ABCD aylarinda” */
  
  void degistir(char metin[],char degisecek[],char kelime[]){
  	int i,j,k,sayac=0,boyut=0;
  	
	  for(i=0;metin[i]!='\0';i++){
  		for(j=0;kelime[j]!='\0';j++){
  	         if(metin[i]==degisecek[j]){
  	         	sayac++;
  	         	metin[i]=kelime[j];
  	         	}
  	        
	}
} printf("%s",metin);
  }



int main() {
	char metin[50],kelime[50],degisecek[50];
	
	printf("metni giriniz:");
	gets(metin);
	
	printf("degisecek kelimeyi giriniz:");
    gets(degisecek);
	
	printf("yerine gelecek kelimeyi giriniz:");
    gets(kelime);
	
    degistir(metin,degisecek,kelime);
return 0;
}
