#include <stdio.h>
#include <stdlib.h>

/* klavyeden girilen sayýnýn hanesindeki en buyuk rakamý bulma*/

int main() {
	int i,j,dizi[50],sayi,bsm=1,gecici,eb;

	printf("sayiyi giriniz:");
	 scanf("%d",&sayi);
	 	gecici=sayi;
	 while(sayi/10!=0){
	 	bsm++;
	 	sayi/=10;
	}
     sayi=gecici;
     for(i=0;i<bsm;i++){
     	sayi%=10;
        dizi[i]=sayi;
     	sayi=gecici;
		sayi/=10;
		gecici/=10;
	 }
	
	 eb=dizi[0];
	 for(i=0;i<bsm;i++){
	 	for(j=i;j<bsm;j++){
	 		if(dizi[j]>eb){
	 			eb=dizi[j];
			 }
		 }
	 }
	 printf("en buyuk:%d",eb);
	return 0;
}
