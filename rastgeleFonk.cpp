#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Klavyeden girilen iki say� aras�nda rastgele say�lar �retecek bir fonksiyon yaz�n�z. */

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
