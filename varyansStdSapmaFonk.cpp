#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<math.h>
/*Rastgele oluþturulan N elemanlý int bir dizinin varyans ya da standard sapma deðerini bulan 
fonksiyonu yazýnýz. Parametre 1 ise varyans, 0 ise std sp. Hesaplanacak.*/
 int n;
 int sonuc(int secim){
    srand(time(NULL));
 	int i,j,dizi[n],top;
    double varyans,gecici,sapma;
 		for(j=0;j<n;j++){
 			dizi[j]=rand()%100;
 			printf("%d\t",dizi[j]);
 			top+=dizi[j];
 			
		 }
		 top/=n;
		 for(i=0;dizi[i]!='\0';i++){
		 	dizi[i]-=top;
		 	dizi[i]*=dizi[i];
		 	varyans+=dizi[i]; 
			gecici=varyans;
		 	varyans/=n;
		 }
		gecici/=n-1;
		sqrt(gecici);
		sapma=gecici;
		
		if(secim==0){
			return sapma;
		}
			if(secim==1){
			return varyans;
		}
	 }
	 
	 int main(){
	 	
	 	int secim;
	 	
	 	printf("n degerini yaziniz:");
	 	scanf("%d",&n);
	 	
		printf("varyans icin 1 standart sapma icin 0 yaziniz:");
	 	scanf("%d",&secim);
	 
	 	printf("\nsonuc:%d",sonuc(secim));
	 	
	 	return 0;
	 }
 
