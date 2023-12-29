#include <stdio.h>
#include <stdlib.h>

/*  Özyineleme kullanarak Doðal Sayýlarýn Toplamýný Bulmak için C Programý*/
  int toplam(int x);
 

int main() {
	int sayi,sonuc=0;
	
	printf("sayiyi giriniz:");
	 scanf("%d",&sayi);
	 
	sonuc=toplam(sayi);
	
		printf("sonuc:%d",sonuc);
	return 0;
}

int toplam(int x){
 	int top;
 	while(x>=0){
 	top+=x;
	 x--;	
    toplam(x); 
	}
   return top;
	 
 }
 
