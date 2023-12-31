#include <stdio.h>
#include <stdlib.h>

/*ÝÇÝNE GÖNDERÝLEN SAYIYA KADAR OLAN TEKLERÝN VE ÇÝFTLERÝN TOPLAMINI EKRANA YAZDIRAN FONKSÝYONU YAZINIZ*/
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

