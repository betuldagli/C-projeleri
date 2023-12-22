#include <stdio.h>
#include <stdlib.h>

/* KULLANICININ GONDERDIGI 2 INT DEÐERLE DÝKDÖRTGENÝN ALANINI GERÝ DÖNDÜREN FONKSÝYONU YAZINIZ */

  int alan(int x,int y){
  	int alan;
  	
  	alan=x*y;
  	
  	return alan;
  }


int main() {
	int x,y;
	
	printf("kisa kenari giriniz:");
	 scanf("%d",&x);
	printf("uzun kenari giriniz:");
	 scanf("%d",&y);
	 
	 alan(x,y);
	 
	 printf("dikdortgenin alani:%d",alan(x,y));
	return 0;
}
