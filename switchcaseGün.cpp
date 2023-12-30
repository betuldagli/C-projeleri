#include <stdio.h>
#include <stdlib.h>

/*  Kullanýcýdan 1 ile 7 arasýnda bir sayý girmesini isteyiniz. Girilen deðere göre hangi gün olduðunu ekrana yazdýrýnýz. */

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
