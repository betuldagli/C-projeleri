#include <stdio.h>
#include <stdlib.h>

/* bir tam say� girilmesi istenmektedir. Ve bizde girilen say�, 100'den b�y�kse ko�ulunu vererek ekrana "Girilen say� 100'den b�y�kt�r"  */

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
