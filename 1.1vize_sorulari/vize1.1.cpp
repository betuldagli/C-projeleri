#include <stdio.h>
#include <stdlib.h>

/*1.soru= kullan�c� istedi�i kadar tek tek pozitif say� giriyor. E�er varsa kendinden �nceki 2 tane  eleman�n toplam� olan say�lar�n adeti*/

int main() {
	int i,sayi,sayac=0,gecici=0,deger=0,sayac1=0,gecicitut[sayac1+1],degertut[sayac1+1],sayitut[sayac1+1];

   printf("negatif sayi girerek cikabilirsiniz:\n");
    
    do{
     printf("sayi giriniz:");
      scanf("%d",&sayi);
	 
	 if(sayi<0)
	 	break;
		sayac++;

	 
	 
	 if(sayac>2) 
	 if(sayi==gecici+deger){
	 	gecicitut[sayac1]=gecici;
	 	degertut[sayac1]=deger;
	 	sayitut[sayac1]=sayi;
	 	sayac1++;
		 }
		deger=gecici;
		gecici=sayi;
	 
	  
	 
}
    while (sayi>0);
    printf("\n");
	 	for(int i=0;i<sayac1;i++){
	 		printf("%d + %d = %d\n",gecicitut[i],degertut[i],sayitut[i]);
		 }
	 	printf("Toplam adet:%d",sayac1);
	 
	return 0;
}
