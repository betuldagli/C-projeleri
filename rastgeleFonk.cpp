#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Klavyeden girilen iki sayý arasýnda rastgele sayýlar üretecek bir fonksiyon yazýnýz. */

  int rastgele(){
  	int x,y,z,q;
  	srand(time(NULL));
  	printf("tavan sayiyi giriniz:");
  	 scanf("%d",&x);
  	 
  	printf("taban sayiyi giriniz:");
  	 scanf("%d",&y);
  	q=x-y;
  	z=(rand()%q);
  	z+=y;
  	return z;
  }



int main() {
		srand(time(NULL));
	int sayi;
	
	sayi=rastgele();
	
	printf("rastgele sayi:%d",sayi);
	return 0;
}
