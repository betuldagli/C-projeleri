#include <stdio.h>
#include <stdlib.h>

/* selection siralama */

int main() {
	int i,j,gecici,dizi[50],n;
	printf("eleman sayisini giriniz:");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++){
	 	printf("%d. elemani giriniz:",i+1);
	 	 scanf("%d",&dizi[i]);
	 }
	 
	 for(i=0;i<n-1;i++){
	 	gecici=i;
	 	for(j=i+1;j<n;j++){
	 		if(dizi[gecici]>dizi[j]){
	 			gecici=j;
			 }
		 }if(gecici!=i){
		 	int temp=dizi[i];
		 	dizi[i]=dizi[gecici];
		 	dizi[gecici]=temp;
		 }
	 }
	 
	 for(i=0;i<n;i++){
	 	printf("%d\t",dizi[i]);
	 }
	return 0;
}
