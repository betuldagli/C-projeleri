#include <stdio.h>
#include <stdlib.h>

/*���NE G�NDER�LEN SAYIYA KADAR OLAN TEKLER�N VE ��FTLER�N TOPLAMINI EKRANA YAZDIRAN FONKS�YONU YAZINIZ*/
 int tektop,cifttop;
 int tekcift(int x){
 	int i;
 	
 	for(i=1;i<=x;i++){
 		if(i%2==0){
 			cifttop+=i;
		 }
		 else{
		 	tektop+=i;
		 }
	 }
	 return tektop,cifttop;
 }

 int main(){
 	int sayi;
 	
 	printf("sayiyi giriniz:");
 	 scanf("%d",&sayi);
 	 
 	 tekcift(sayi);
 	 
 	 printf("teklerin toplami:%d\n",tektop);
 	 printf("ciftlerin toplami:%d",cifttop);
 	return 0;
 }

