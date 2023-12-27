#include <stdio.h>
#include<stdlib.h>

/*KULLANICIDAN ALINAN KENAR UZUNLUÐUNA GÖRE EKRANA YILDIZLA ‘*’ KARE ÇÝZEN FONKSÝYONU YAZINIZ*/

 void kare(int x){
 	int i,j;
 	
 	for(i=0;i<x;i++){
 		for(j=0;j<x;j++){
 			printf("* ");
		 } printf("\n");
	 }
 }
 
 int main(){
 	int kenar;
 	
 	printf("kenari giriniz:");
 	 scanf("%d",&kenar);
 	 
 	 kare(kenar);
 	return 0;
 }
