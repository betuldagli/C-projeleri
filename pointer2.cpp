#include <stdio.h>
#include <stdlib.h>

/* Pointer'lar� (i�aret�ileri) kullanarak 2 say�y� toplayan bir C program kodu yaz�n�z. Girdi olarak konsoldan iki say� okuyunuz.*/

int main() {
	int s1,s2,*p1=&s1,*p2=&s2,toplam=0;
	
	printf("sayilari giriniz:");
	scanf("%d %d",p1,p2);
	
	toplam=*p1+*p2;
	
	printf("toplam:%d",toplam);
	return 0;
}
