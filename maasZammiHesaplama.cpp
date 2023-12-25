#include <stdio.h>
#include <stdlib.h>

/* maaþa yapýlan zam */

int main() {
	int maas,islem;
	
	printf("maas giriniz: ");
	 scanf("%d",&maas);
	 
	printf("turunu sec:");
	 scanf("%d",&islem);
	 
	switch(islem){
		
		case 1:
			maas=maas+(maas*0.5);
			printf("yeni maas:%d",maas);
			break;
	    case 2:
	    	maas=maas+(maas*0.3);
			printf("yeni maas:%d",maas);
			break;
		case 3:	
			maas=maas+(maas*0.2);
			printf("yeni maas:%d",maas);
		break;
		case 4:
			maas=maas+(maas*0.1);
			printf("yeni maas:%d",maas);
		break;
		default:
			printf("gecerli tur giriniz:");
	}
	return 0;
}
