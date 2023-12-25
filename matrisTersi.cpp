#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*2x2 MATRÝSÝN TERSÝNÝ BULAN PROGRAM */

int main() {
	 int matris[2][2];
	 int i,j,sonuc,sonuc1,gecici;
	 float sonuc2;
	 srand(time(NULL));
	 
	 	for(i=0;i<2;i++){
		   for(j=0;j<2;j++){
		matris[i][j]=rand()%10;
		printf("%d  ",matris[i][j]);
	} printf("\n");
}
	printf("matrisin tersi:\n");
	
		for(i=0;i<2;i++){
		   for(j=0;j<2;j++){
		   	if(i==j){
		   		sonuc*=matris[i][j];
			   }
		   	else{
		   		sonuc1*=matris[i][j];
			   }
		}
}

    sonuc2=sonuc-sonuc1;
    sonuc2=1/sonuc2;
    
     
	 for(i=0;i<2;i++){
		   for(j=0;j<2;j++){
		   	if(i==0 && j==0){
		 gecici=matris[i][j];
		 matris[i][j]=matris[i+1][j+1];
		 matris[i+1][j+1]=gecici;}
		   	else if (i!=j){
		   		matris[i][j]=(-1)*matris[i][j];
			   }
		}
}
	 
	 for(i=0;i<2;i++){
		   for(j=0;j<2;j++){
      printf("%d  ",matris[i][j]);
		} printf("\n");
	}
			   
	return 0;
}
