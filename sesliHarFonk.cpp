#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen bir c�mledeki sesli harfleri * (y�ld�z) karakteri 
ile de�i�tirerek ekrana yazan bir C program� yaz�n�z. */

   int sesliharf(){
   	char metin[100];
   	int i;
   	
   	printf("metni giriniz:");
   	gets(metin);
   	printf("\nyeni metin:\n");
   	for(i=0;metin[i]!='\0';i++){
   	if(metin[i]=='a'||metin[i]=='e'||metin[i]=='i'||metin[i]=='o'||metin[i]=='u'||metin[i]=='A'||metin[i]=='E'||metin[i]=='I'||metin[i]=='O'||metin[i]=='U'){
   		metin[i]='*';
	   }
	   
	   printf("%c",metin[i]);
	   }
	   
	   
   }


int main() {
	
	sesliharf();
	return 0;
}
