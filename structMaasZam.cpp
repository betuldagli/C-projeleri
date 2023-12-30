#include <stdio.h>
#include <stdlib.h>

/* maaþ zammý*/

  struct kisi{
  	int yas;
  	char ad[40];
  	int maas;
  };




int main() {
	struct kisi kisi;
	float zam=0;
	
	printf("adinizi giriniz:");
	gets(kisi.ad);
	
	printf("yasinizi giriniz:");
	 scanf("%d",&kisi.yas);
	 
	printf("maasinizi giriniz:");	
	scanf("%d",&kisi.maas);
	
	zam=kisi.maas+(kisi.maas*0.9);
	
	printf("%s isimli kisinin yeni maasi:%.2f",kisi.ad,zam);
	
	return 0;
}
