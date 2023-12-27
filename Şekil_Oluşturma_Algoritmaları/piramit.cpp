#include <stdio.h>
#include <stdlib.h>

/* piramit */

int main() {
	int i,j,n;
	
	printf("piramitin yuksekligini giriniz:");
	 scanf("%d",&n);
	 
	 for(i=0;i<=n;i++){
	 	for(j=0;j<i;j++){
	 		printf("*");
		 } printf("\n");
	 }
	return 0;
}
