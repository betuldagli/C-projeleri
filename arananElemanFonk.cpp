#include <stdio.h>
#include <stdlib.h>

/* Verilen bir int dizi i�erisinden parametre olarak verilen eleman�n ka��nc� s�rada oldu�unu bulan
(yoksa -1 d�nd�ren) fonksiyonu yaz�n�z. 
int dizi[8]={1, 2, 5, 12, 20, 50, 4, 30}; 
int Eleman_Index_Bul(int dizi[], int aranan); aranan 5 ise; Sonuc: 3 d�necektir */
    
  int kacinci(int dizi[],int aranan){
  	int i,sayac=0,gecici;
  	
  	for(i=0;dizi[i]!='\0';i++){
  		if(dizi[i]==aranan){
	    sayac++;
	    gecici=i;
		  }
        }
       if(sayac==1){
       	return gecici+1;
	   } 
	   else{
	   	return -1;
	   }
    }

int main() {
	int dizi[8]={1, 2, 5, 12, 20, 50, 4, 30};
	int aranan;
	printf("dizi:\n");
	for(int i=0;dizi[i]!='\0';i++){
		printf("%d\t",dizi[i]);
     }

	printf("\naradiginiz sayiyi giriniz:");
	 scanf("%d",&aranan);
	 
	 printf("%d",kacinci(dizi,aranan));
	
	return 0;
}
