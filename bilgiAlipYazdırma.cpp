#include <stdio.h>
#include <stdlib.h>

/*bilgi alýp yazdirma*/

int main() {
	
	char kitapadi[15],yazar[20],sayfasayisi[3],basimtarihi[4],basimevi[15],turu[10];
	
	printf( "kitap adini giriniz: ");
	scanf("%s",kitapadi);
	
	printf("yazari giriniz: ");
	scanf("%s",yazar);
	
	printf("sayfa sayisini giriniz: ");
	scanf("%s",sayfasayisi);
	
		printf("basim tarihini giriniz: ");
	scanf("%s",basimtarihi);
	
		printf("basim evini giriniz: ");
	scanf("%s",basimevi);
	
		printf("kitabin turunu giriniz: ");
	scanf("%s",turu);
	printf("\n\n**********kitap bilgileri**********\n");
	printf("kitabin adi: %s \n",kitapadi);
	printf("kitabin yazari: %s\n",yazar);
	printf("sayfa sayisi: %s\n",sayfasayisi);
	printf("kitabin basim tarihi: %s\n",basimtarihi);
	printf("kitabin basim evi: %s\n",basimevi);
	printf("kitabin turu: %s\n",turu);
	
	
	return 0;
}
