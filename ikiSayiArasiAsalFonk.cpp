#include <stdio.h>
#include <stdlib.h>

/*Ýki Aralýk Arasýndaki Asal Sayýlarý Gösteren C Programý */
  int araasal(){
  	int x,y,j,ek=0,eb=0,sayac=0,i;
  	
  	printf("ilk sayiyi giriniz:");
  	scanf("%d",&x);
  	
  	printf("ikinci sayiyi giriniz:");
  	scanf("%d",&y);
  	
  	if(x<y){
  		ek=x;
  		eb=y;
    }
	else{
		ek=y;
		eb=x;
	}
	
	for(i=ek+1;i<eb;i++){
	  sayac=0;
	  for(j=2;j<i;j++){ 
	   if(i%j==0){
	    	sayac++;
		}
	}
	if(sayac==0){
		printf("%d\n",i);
	   }
  }
return i;
}

int main() {
	
	araasal();

	return 0;
}
