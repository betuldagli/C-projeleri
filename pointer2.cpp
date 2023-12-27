#include <stdio.h>
#include <stdlib.h>

/* Pointer'larý (iþaretçileri) kullanarak 2 sayýyý toplayan bir C program kodu yazýnýz. Girdi olarak konsoldan iki sayý okuyunuz.*/

int main() {
	int s1,s2,*p1=&s1,*p2=&s2,toplam=0;
	
	printf("sayilari giriniz:");
	scanf("%d %d",p1,p2);
	
	toplam=*p1+*p2;
	
	printf("toplam:%d",toplam);
	return 0;
}
