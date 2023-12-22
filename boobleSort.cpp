#include <stdio.h>
#include <stdlib.h>

/*booble sort*/

int main() {
	int i,j,dizi[50],n;
	
	printf("dizinin boyutunu giriniz:");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++){
	 	printf("%d.elemani giriniz:",i+1);
	 	 scanf("%d",&dizi[i]);
	 }
	 	 printf("dizinin ilk hali:\n");
	 for(i=0;i<n;i++){
	 	printf("%d\t",dizi[i]);
	 }
	 printf("\n");
	 for(i=0;i<n;i++){
	 	for(j=0;j<n-1;j++){
	 		if(dizi[j]>dizi[j+1]){
	 			int temp=dizi[j];
	 			dizi[j]=dizi[j+1];
	 			dizi[j+1]=temp;
			 }
		 }
	 }
	 printf("dizinin son hali:\n");
	 for(i=0;i<n;i++){
	 	printf("%d\t",dizi[i]);
	 }
	 
	return 0;
}
