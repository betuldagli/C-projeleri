#include <stdio.h>
#include <stdlib.h>
/*ilk iki basamak ve son iki basamak toplamý eþit olan 4 basamaklý kaç sayý var*/
int main() {
	 int x,ilkikitoplam,sonikitoplam,binler,yuzler,onlar,birler,sayac;
	
		sayac=0;
	for(x=1000;x<=9999;x++) {
	  binler=x/1000;
	  yuzler=x/100;
	  yuzler=yuzler%10;
	  ilkikitoplam=(binler+yuzler);
	  onlar=x%100;
	  onlar=onlar/10;
	  birler=x%10;
	  sonikitoplam=(onlar+birler);
	  	if(ilkikitoplam==sonikitoplam){
	  	sayac++;
		} 
	}
	  printf("%d adet sayi var\n",sayac);
	  	return 0;
}
