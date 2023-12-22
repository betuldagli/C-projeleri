#include<stdio.h>
#include<stdlib.h>

/*FONKSÝYONA YOLLANAN DEÐERÝN ASAL ÇARPANLARINI 1.3.5 ÞEKLÝNDE EKRANA YAZIDRAN FONKSÝYON*/

 void carpanlar(int x){
 	int i,j,sayac=0;
 	
 	for(i=2;i<=x;i++){
 		if(x%i==0){
 			for(j=2;j<i;j++){
 				if(i%j==0){
 					sayac++;
				 }
			 }
			 if(sayac==0){
			 	printf("%d.",i);
			 }
			
			 
		 }
		 sayac=0;
	 }
 }
 
 int main(){
 	int i,sayi;
 	
 	printf("sayiyi giriniz:");
 	 scanf("%d",&sayi);
 	 
 	 printf("carpanlar:\n");
 
	 carpanlar(sayi);
    return 0;
 }
