#include <stdio.h>
#include<stdlib.h>

/*KULLANICIDAN ALINAN KENAR UZUNLU�UNA G�RE EKRANA YILDIZLA �*� KARE ��ZEN FONKS�YONU YAZINIZ*/

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
