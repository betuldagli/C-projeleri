#include <stdio.h>
#include <stdlib.h>
/*sýnav proje ort hesaplama*/
int main() {
	
	int s1,s2,s3,proje;
	float ort;
	 printf("1. sinav notunuzu giriniz:");
	  scanf("%d",&s1);
	 
	 printf("2. sinav notunuzu giriniz:");
	  scanf("%d",&s2);
	
	 printf("3. sinav notunuzu giriniz:");
	  scanf("%d",&s3);
	
	 printf("proje notunuzu giriniz:");
	  scanf("%d",&proje);
	 
	  ort=((s1+s2+s3+proje)/4);
	 printf("\n ortalamaniz :%f",ort);
	return 0;
}
