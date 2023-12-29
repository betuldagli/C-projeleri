#include <stdio.h>
#include <stdlib.h>

/* Bir dizide bulunan elemanlarý büyükten küçüðe sýralayan kodun C programlama dilindeki kodunu yazýnýz.Dizi boyut ve elemanlarýný kullanýcýdan alýnýz. */

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
