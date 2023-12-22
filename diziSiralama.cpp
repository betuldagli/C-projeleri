#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* RASTGELE SAYILARLA OLUÞTURULAN 10 BOYUTLU DÝZÝYÝ KÜÇÜKTEN BÜYÜÐE SIRALAYAN PROGRAM*/

int main() {
	int dizi[10];
     srand(time(NULL));
	int i,j,rastgele=rand()%20,gecici;
	printf("dizinin ilk hali:\n");
	for(i=0;i<10;i++){
	dizi[i]=rand()%20;
		printf("%d\t",dizi[i]);
		}
     
     for(i=0;i<10;i++){
     	for(j=0;j<10;j++){
     		if(dizi[i]<dizi[j]){
     	gecici=dizi[i];
     	dizi[i]=dizi[j];
     	dizi[j]=gecici;
		    }
        }
	}
		printf("\ndizinin yeni hali:\n");
			for(i=0;i<10;i++){
		printf("%d\t",dizi[i]);
	}
	return 0;
}
