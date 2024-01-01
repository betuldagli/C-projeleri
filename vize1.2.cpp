#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 2.soru=3 tane dizi var A[50],B[50],C[50] diye tanýmlanýyor A ve B dizileri rastgele sayilar ile dolduruluyor eðer Anin sayisi 5ten kucukse Cye ataniyor.
Eger Bnin elemani %ten buyukse Cye ataniyor soruyu tam hatirlamiyorum*/

int main() {
	char A[50],B[50],C[50];
	int i;
	srand(time(NULL));
	for(i=0;i<50;i++){
		A[i]=rand()%10;
		B[i]=rand()%10;
		printf("A:%d\n",A[i]);
		printf("B:%d\n",B[i]);
		if(A[i]<5){
			C[i]=A[i];
		}
		else if (B[i]>=5){
			C[i]=B[i];
		}
		printf("%d.eleman: %d\n",i+1,C[i]);
	}
	
	return 0;
}
