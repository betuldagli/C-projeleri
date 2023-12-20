#include <stdio.h>
#include<stdlib.h>

/*2) Kullanýcý istedeði sürece klavyeden girilen pozitif sayýlardan 3 ya da 7 ye bölünebilen sayýlarýn 
ortalamasýný program sonunda veren, negatif sayý girince programý sonlandýran program kodunu 
yazýnýz*/

int main(){
	int sayi,sayac=0;
	float ort,toplam;
	
	  do{
	  printf("sayi giriniz:");
	 scanf("%d",&sayi);	

	  	if(sayi%3==0||sayi%7==0){
	 		if(sayi%21!=0){
	        toplam+=sayi;
	 		sayac++;
	 	 }
	}
}
	 while(sayi>0);{
	 }
	 ort=toplam/sayac;
	printf("%.2f",ort);
	
	return 0;
}
