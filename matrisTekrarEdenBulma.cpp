#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* MATRÝSTEKÝ EN BÜYÜK ELEMAN VE KAÇ KERE TEKRAR ETTÝGÝNÝ EKRANA YAZDIRAN PROGRAM */

int main() {
	int satir=0,sutun=0,enbuyuk,sayac=0,i,j;

	printf("satir sayisi giriniz: ");
	 scanf("%d",&satir);
	 
	printf("sutun sayisi giriniz: ");
	 scanf("%d",&sutun);
	 	
	int matris[satir][sutun];
    srand(time(NULL));


	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
		matris[i][j]=rand()%10;
	}
}

    for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
	printf("%d  ",matris[i][j]);
		
		}	printf("\n");
	}
		

  
    for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){	
		 if(enbuyuk<matris[i][j]){
		 enbuyuk=matris[i][j];
		 }
	   }
	}


	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
     	 if(enbuyuk==matris[i][j]){
		 	sayac++;
		 } 
	}
}
		 printf("en buyuk matris degeri: %d\n",enbuyuk);
       printf("en buyuk degerin tekrar sayisi : %d",sayac);
	return 0;
}


