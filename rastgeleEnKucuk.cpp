#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*  [0-100] aralýðýnda N adet buyukten kucuge sýralý olacak þekilde rastgele sayý üretiniz.*/

int main() {
	int i,j,n,sayi,ek,dizi[n];
    srand(time(NULL));
    printf("n degerini giriniz:");
     scanf("%d",&n);
      
      for(i=0;i<n;i++){
      	sayi=rand()%100;
      	dizi[i]=sayi;
	  }

	    for(i=0;i<n;i++){
	    	for(j=i+1;j<n;j++){
	        	if(dizi[i]>dizi[j]){
	         ek=dizi[j];
	         dizi[j]=dizi[i];
	         dizi[i]=ek;
	         } 
		} printf("%d\n",dizi[i]);
	}
	
	return 0;
}
