#include <stdio.h>
#include <stdlib.h>

//eskenar üçgende cevre ve alan hesabý cevre:3*kenar alan:kenar*yükseklik

int main() {
	int kenar,cevre,alan,yukseklik;
	
	printf("eskenar ucgenin bir kenarini giriniz: ");
	scanf("%d",&kenar);
	printf("ucgenin yuksekligini giriniz:");
	scanf("%d",&yukseklik);
	cevre=(kenar*3);
	printf("ucgenin cevresi: %d\n",cevre);
	alan=((kenar*yukseklik)/2);
	printf("ucgenin alani: %d\n",alan);

	return 0;
}
