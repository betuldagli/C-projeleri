#include<stdio.h>
#include<stdlib.h>

/*KULLANICI TARAFINDAN ÝÇÝNE GÖNDERÝLEN CÜMLEYÝ TERSTEN YAZDIRAN FONKSÝYON*/

  	char ters(char cumle[50]){
  		int i,j,boyut;
  		char ters[50];
  		
  		for(boyut=0;cumle[boyut]!='\0';boyut++);
  		
		  	printf("cumlenin tersi:\n");
		  		for(j=boyut;j>=0;j--){
  				  ters[j]=cumle[boyut];
			      boyut--;
	                 printf("%c",ters[j]);
			    }
  		return ters[i];
	  }

 int main(){
 	char cumle[50];
 	
 	printf("cumleyi giriniz:");
 	gets(cumle);
 	
    ters(cumle);
 return 0;
 }

