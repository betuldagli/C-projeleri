#include <stdio.h>
#include <stdlib.h>

/* karsidan alinan verilerle doldurulan matrisin en buyuk ve en kucuk elemaninin kacıncı satır ve sütunda olduğunu gösteren program kodu*/

int main() {
	int i,j,k,l,satir,sutun,ek,eb,eki,ekj,ebk,ebl;
	
	printf("satir sayisini giriniz:");
	 scanf("%d",&satir);
	 
	 
	printf("sutun sayisini giriniz:");
	 scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			printf("%d.satir %d.sutunu giriniz:",i+1,j+1);
		     scanf("%d",&matris[i][j]);   
		}
	}
	  ek=matris[0][0];
	  eb=matris[0][0];
	  
	  	for(i=0;i<satir;i++){
		for(j=0;j<sutun;j++){
			if(matris[i][j]<ek){
				ek=matris[i][j];
				eki=i+1;
				ekj=j+1;
			}
			
		}
    }
    for(k=0;k<satir;k++){
    	for(l=0;l<sutun;l++){
			if(matris[k][l]>eb){
				eb=matris[k][l];
				ebk=k+1;
				ebl=l+1;
			}
		}
	}
	
    printf("matrisin en buyuk elemani %d.satir %d.sutundaki %ddir.\n",ebk,ebl,eb);
     printf("matrisin en kucuk elemani %d.satir %d.sutundaki %ddir.",eki,ekj,ek);
	return 0;
}
