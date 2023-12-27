#include <stdio.h>
#include <stdlib.h>

/*Pointer kullanarak iki sayýdan en büyüðünü bulan bir C program kodu yazýnýz.*/

int main() {
	int s1,s2,*p1=&s1,*p2=&s2;
	
	printf("sayilari giriniz:");
	scanf("%d %d",p1,p2);
	
	if(*p1>*p2){
		printf("buyuk sayi %d",*p1);
	}
	else{
		printf("buyuk sayi %d",*p2);
	}
	
	return 0;
}
