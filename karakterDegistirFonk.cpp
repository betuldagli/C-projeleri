#include <stdio.h>
#include <stdlib.h>

/* Parametre olarak verilen bir string i�indeki yine parametre olarak verilen karakter yerine yeni 
karakterle de�i�tiren ve yeni stringi d�nd�ren fonksiyonu yaz�n�z. �MERHABA�, �A�, �X�, �MERHXHX */

   void degistir(char metin[ ],char eskikarakter,char karakter){
   	int i;
   	
   	for(i=0;i<metin[i]!='\0';i++){
   		if (metin[i]==eskikarakter){
   			metin[i]=karakter;
		   }
		   printf("%c",metin[i]);
	   }
   }




int main() {
	char metin[50],karakter,eskikarakter;
	
	printf("metni giriniz:");
	gets(metin);
	
	printf("degistirmek istediginiz karakteri giriniz:");
	scanf("%s",&eskikarakter);
	
	printf("yerine gececek karakteri giriniz:");
	 scanf("%s",&karakter);
	 
	 degistir(metin,eskikarakter,karakter);
	
	return 0;
}
