#include <stdio.h>
#include<stdlib.h>

/*2) Kullan�c� istede�i s�rece klavyeden girilen pozitif say�lardan 3 ya da 7 ye b�l�nebilen say�lar�n 
ortalamas�n� program sonunda veren, negatif say� girince program� sonland�ran program�kodunu�
yaz�n�z*/

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
