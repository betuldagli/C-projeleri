#include <stdio.h>
#include <stdlib.h>

/* Bir dizide bulunan elemanlar� b�y�kten k����e s�ralayan kodun C programlama dilindeki kodunu yaz�n�z.Dizi boyut ve elemanlar�n� kullan�c�dan al�n�z. */

int main() {
	int i,j,boyut,dizi[50];
	
	printf("eleman sayisini giriniz:");
	 scanf("%d",&boyut);
	 
	 for(i=0;i<boyut;i++){
	 	printf("%d. elemani giriniz:",i+1);
	 	 scanf("%d",&dizi[i]);
	 	 }
	 	 
	 	for(i=0;i<boyut;i++){
	 		for(j=i;j<boyut;j++){
	 			if(dizi[i]>dizi[j]){
	 				int temp=dizi[i];
	 				dizi[i]=dizi[j];
	 				dizi[j]=temp;
				 }
			 }
		 }
		 	 for(i=0;i<boyut;i++){
	 	printf("%d\t",dizi[i]);
	 	 }
	 	return 0;
}
