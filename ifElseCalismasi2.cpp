#include <stdio.h>
#include <stdlib.h>

/*  Girilen de�er s1 de�i�kenine atan�yor. if sat�r�nda s1 de�i�ken de�erinin tek say� olup olmad��� konrol� yap�l�r.
 Tek bir say� ise if ko�uluna ba�l� olarak tan�mlanm�� kod blo�u i�indeki karakter dizisini ve de�i�ken de�erinin 
 3 kat�n� hesaplayarak ekrana yazar. Say� �ift ise else sat�r�na ba�l� olarak tan�mlanm�� kod blo�u i�indeki karakter dizisini ve de�i�ken
  de�erinin 2 kat�n� hesaplayarak ekrana yazar.*/

int main() {
	int s1;
	
	printf("bir sayi giriniz:");
	 scanf("%d",&s1);
	 
	 if (s1%2==1){
	 printf("girilen sayi tektir\n");
	 	printf("sayinin 3 kati:%d",s1*3);
	 }
	 else{
	 	printf("girilen sayi cifttir\n");
	 	printf("sayinin iki kati:%d",s1*2);
	 }
	return 0;
}
