#include <stdio.h>
#include <stdlib.h>

/* Parametre olarak char dizisi ve bir adet char eleman� alan ve bu dizi i�inde aranan eleman�n sondan 
ka��nc� s�rada oldu�unu bulan (yoksa -1 d�nd�ren) fonksiyonu yaz�n�z.
Dizi Boyut hesab� i�in int adet= sizeof(dizi); kullanabilirsiniz. char charDizi[]="Programlaman�n Temeli"; aranan=�m� ise Sonu� 4 
d�necektir.
int Sondan_Karakter_Bul(char *charDizi, char aranan); */

  int sondankacinci(char dizi[],char aranan){
  	int i,sayac=0,gecici,boyut=0;
  	
  	for(i=0;dizi[i]!='\0';i++){
  		boyut++;
	  }
  	
  	for(i=0;dizi[i]!='\0';i++){
  		if(dizi[i]==aranan){
	    sayac++;
	    gecici=i;
		  }
        }
       if(sayac==1){
       	return boyut-gecici;
	   } 
	   else{
	   	return -1;
	   }
    }


int main() {
	char metin[50];
	char aranan;
	
	printf("metni giriniz:");
    gets(metin);
    
	printf("aradiginiz elemani giriniz:");
	 scanf("%s",&aranan);
	 
	 printf("%d",sondankacinci(metin,aranan));
	return 0;
}
