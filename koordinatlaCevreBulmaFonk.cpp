#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* girilen koordinat degerlerine göre üçgenin çevresini hesaplayan program kodu*/

  int cevrebul(int x1,int x2,int x3,int y1, int y2, int y3){
     int k1,k2,k3;
     
     k1=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
     k2=sqrt(pow((x2-x3),2)+pow((y2-y3),2)); 
     k3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
     
     return k1+k2+k3;
  }



int main() {
	int x1,x2,x3,y1,y2,y3;

	printf("x1 degerini giriniz:");
	 scanf("%d",&x1);
	 
	printf("x2 degerini giriniz:");
	 scanf("%d",&x2);	
	 
	printf("x3 degerini giriniz:");
	 scanf("%d",&x3);	
	
	printf("y1 degerini giriniz:");
	 scanf("%d",&y1);	
	  
	printf("y2 degerini giriniz:");
	 scanf("%d",&y2);
	 
	printf("y3 degerini giriniz:");
	 scanf("%d",&y3);
	 
	 cevrebul(x1,x2,x3,y1,y2,y3);
	 
	 printf("ucgenin cevresi:%d",cevrebul(x1,x2,x3,y1,y2,y3));
	 
	 
	return 0;
}
