#include <stdio.h>
#include <stdlib.h>

/*ÝÇÝNDEKÝ KELIME1’Ý TERSTEN KELIME2’YE KAYDEDEN VE EKRANA YAZDIRAN PROGRAM */
 
 typedef struct degisken{
 	char kelime1[50];
 	char kelime2[50];
 };


int main() {
	degisken cumle;
	int i,j,boyut;
	
	printf("ilk kelimeyi giriniz:");
	 gets(cumle.kelime1);
	 
	 printf("kelimenin tersten hali:");
	 for(i=0;cumle.kelime1[i]!='\0';i++);
	 boyut=i;
	 
	 	for(j=0;j<=boyut;j++){
	 		cumle.kelime2[j]=cumle.kelime1[i];
	 		i--;	
			printf("%c",cumle.kelime2[j]);
		 }

	
	return 0;
}
