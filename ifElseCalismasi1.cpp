#include <stdio.h>
#include <stdlib.h>

/* bir tam sayý girilmesi istenmektedir. Ve bizde girilen sayý, 100'den büyükse koþulunu vererek ekrana "Girilen sayý 100'den büyüktür"  */

int main() {
	
	int sayi;
	
	 printf("bir sayi giriniz: ");
	  scanf("%d",&sayi);
	  
	if (sayi>100){
		printf("sayi 100'den buyuktur");
	}
    else if(sayi==100){
    	printf("sayi 100'e esittir");
	}
	else{
		printf("sayi 100'den kucuktur");
	}
	return 0;
}
