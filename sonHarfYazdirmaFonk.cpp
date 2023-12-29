#include <stdio.h>
#include <stdlib.h>

/*  Verilen bir cümledeki kelimelerin sadece son harflerini yazdýran bir fonksiyon yazýnýz.*/

  void cumle(){
  	char cumle[50];
  	int i,bosluk,boyut=0;
  	printf("cumleyi yaziniz:");
  	gets(cumle);
  	
  	for(i=0;cumle[i]!='\0';i++){
  	bosluk=cumle[i];
	  	if(bosluk==' '){
	  		printf("%c",cumle[i-1]);
		  }
		  boyut++;
	  }
	  printf("%c",cumle[boyut-1]);
  	
  }


int main() {
	
	cumle();
	return 0;
}
