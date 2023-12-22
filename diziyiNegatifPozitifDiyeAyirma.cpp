#include <stdio.h>
#include <stdlib.h>

/* kullanýcý tarafýndan girilen n tane tam sayýdan pozitif ve negatif olarak farklý dizilerde gösteren kod*/

int main() {
	 int i,n,dizi[n],dizipoz[n],dizineg[n],in=0,in1=0;
	 
	 	printf("dizi eleman sayiyi giriniz:");
         scanf("%d",&n);
		printf("\n\n");
	   for(i=0;i<n;i++){
	   	printf("sayiyi giriniz:");
	  	 scanf("%d",&dizi[i]);
	  	  if(dizi[i]>=0){
	    	dizipoz[in]=dizi[i];
	    	in++;
	    }
	   else {
	    	dizineg[in1]=dizi[i];
	    	in1++;
	    }
	}
	printf("\n");
	for(i=0;i<in;i++){
	printf("dizipoz[%d]:%d\n ",i+1,dizipoz[i]);

	}
	printf("\n");
	for(i=0;i<in1;i++){
		printf("dizineg[%d]:%d\n",i+1,dizineg[i]);
		}
	return 0;
}
