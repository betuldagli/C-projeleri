#include <stdio.h>
#include <stdlib.h>
/* KULLANICIDAN ALINAN CUMLENIN HARFLERINI ALFABETÝK ÞEKÝLDE SIRALAYIP EKRANA YAZDIRAN PROGRAM */

int main() {
	
	char cumle[50];
	int i,j,gecici;
	printf("cumle giriniz:");
	 gets(cumle);
	 
	 for(i=0;cumle[i]!='\0';i++){
	 	for(j=i+1;j<cumle[j]!='\0';j++){
	 		if(cumle[i]>cumle[j]){
	 			gecici=cumle[i];
	 			cumle[i]=cumle[j];
	 			cumle[j]=gecici;
			}
		 }
	 }
	 
	printf("cumlenin yeni hali:%s",cumle);

	return 0;
}
