#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Sýrasýyla bir asal ve bir asal olmayan olmak üzere [1-100] aralýðýnda N adet rastgele sayý 
üretiniz. 
*/

int main() {
	int a=0,i,j,k,l,n,sayi,sayac=0;
	char asal[100],asaldegil[100];
	srand(time(NULL));
	printf("n degerini giriniz:");
	 scanf("%d",&n);
	 
	for(i=0;i<n;i++){
		sayi=2+rand()%100;
			printf("sayi %d\n",sayi);
		for(j=2;j<sayi;j++){
			if(sayi%j==0){
			sayac++;
			}
			if(sayac==0){
			 asal[l]=sayi;
             l++;    

		   }
            if(sayac!=0){          	
		    asaldegil[k]=sayi;
			k++; 	
           }
      
		}  sayac=0;
    }         
       for(i=0;i<n;i++){

       	if(i%2==0){
       		printf("a %d\n",asal[a]);
		   }
		   else{
		   	printf("d %d\n",asaldegil[a]);
		   }
		   a++;
	   }
 	return 0;
}
