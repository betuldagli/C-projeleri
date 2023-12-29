#include <stdio.h>
#include <stdlib.h>

/* karþý taraftan alýnan sayý kadar alýnan karakteri yazan program */

int main() {
	int i,n;
	char karakter;
	
	printf("karakteri giriniz:");
	scanf("%c",&karakter);
	
	printf("kac kere yazilacagini giriniz:");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++){
	 	printf("%c",karakter);
	 }
	return 0;
}
