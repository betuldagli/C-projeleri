#include <stdio.h>
#include <stdlib.h>

/*saat ve dakikayi parametre olarak alýp aralarýndaki dereceyi hesaplayan fonk */

  int aciBul(int saat,int dakika){
  	int aci,aci1,derece;
  	
  	if(saat>=12){
  		saat-=12;
	  }
	  
	  saat*=30;
	  dakika*=6;
	  
	  derece=saat-dakika;
	  if(derece<0){
	  	derece*=-1;
	  }
	  return derece;
  }


int main() {
	int saat,dakika;
	
	printf("saati giriniz:");
	 scanf(	"%d",&saat);
	 
	printf("dakikayi giriniz:");
	 scanf(	"%d",&dakika);
	 
	 aciBul(saat,dakika);
	 
	 printf("aradaki aci:%d",aciBul(saat,dakika));
	return 0;
}
