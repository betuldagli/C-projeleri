#include <stdio.h>
#include <stdlib.h>

/*  x de�eri klavyeden girildi�inde 1 + 2 + .... + (x - 1) + x seri toplama de�erini hesaplayan fonksiyon yaz�n�z. */

  int toplam(int x){
  	int i,toplam=0;
    for(i=0;i<=x;i++){
  	toplam+=i;	
	  }
	  return toplam;
  }
int main() {
	int sayi,sonuc;
		printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	sonuc=toplam(sayi);
	printf("\nsonuc:%d",sonuc);
	
		return 0;
}
