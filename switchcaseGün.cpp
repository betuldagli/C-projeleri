#include <stdio.h>
#include <stdlib.h>

/*  Kullan�c�dan 1 ile 7 aras�nda bir say� girmesini isteyiniz. Girilen de�ere g�re hangi g�n oldu�unu ekrana yazd�r�n�z. */

int main() {
	
	int gun;
	 printf("1 ve 7 arasinda bir sayi giriniz: \n");
	  scanf("%d",&gun);
	switch (gun){
		case 1:
			printf("pazartesi");
			break;
		case 2:
			printf("sali");
		    break;
		
		case 3:
			printf("carsamba");
			break;
		
		case 4:
			printf("persembe");
		    break;
		
		case 5:
			printf("cuma");
			break;
	
		case 6:
			printf("cumartesi");
		    break;
       
	    case 7:
        	printf("pazar");
            break;
	    
		default:
	    	printf("gecerli sayi giriniz");
	    	break;
	  	} 
	return 0;
}
