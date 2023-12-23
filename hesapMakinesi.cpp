#include <stdio.h>
#include <stdlib.h>

/* C programlama dilinde kullanýcýdan alýnan deðere göre sonuç veren hesap makinesi kodunu switch case kullanarak yazýnýz.*/

int main() {
	
	char secim;
	int sayi1,sayi2;
	
	printf("bir islem seciniz: [+,-,/,*]: ");
	 scanf("%c",&secim);
	 
	printf("bir sayi seciniz:");
	 scanf("%d",&sayi1);
	 
	printf("diger sayiyi seciniz:");
	 scanf("%d",&sayi2);
	
	switch (secim){
		
		case'+':
		printf("%d+ %d = %d",sayi1,sayi2,sayi1+sayi2);
		break;
		
		case '-':
		printf("%d - %d = %d",sayi1,sayi2,sayi1-sayi2);
		break;
		
		case '/':
		printf("%d / %d = %d",sayi1,sayi2,sayi1/sayi2);
		break;
		
		case '*':
		printf("%d * %d = %d",sayi1,sayi2,sayi1*sayi2);
		break;
		
		default:
		printf("gecerli islem giriniz");
		break;
	}
	return 0;
}
