#include<stdio.h>
#include<stdlib.h>

/*FONKS�YONA YOLLANAN DE�ER�N ASAL �ARPANLARINI 1.3.5 �EKL�NDE EKRANA YAZIDRAN FONKS�YON*/

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
