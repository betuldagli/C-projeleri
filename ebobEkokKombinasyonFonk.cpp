#include <stdio.h>
#include <stdlib.h>

/*OBEB(int sayi1, int sayi2), OKEK(int sayi1, int sayi2) ve Kombinasyon(int sayi1, int sayi2) 
fonksiyonlarýný yazýnýz.*/

  int ebob(int x,int y){
  	int i,j,sonuc;
  	
  	for(i=2;i<=x;i++){
  		if(x%i==0){
  			for(j=2;j<=y;j++){
  				if(y%j==0){
  					if(i==j){
  						sonuc=i;
					  }
				  }
			  }
		  }
	  }
	  return sonuc;
  }
  
  int ekok(int x,int y){
  	int ebob,i,j,sonuc;
  	  	
  	for(i=2;i<=x;i++){
  		if(x%i==0){
  			for(j=2;j<=y;j++){
  				if(y%j==0){
  					if(i==j){
  						ebob=i;
					  }
				  }
			  }
		  }
	  }
	  sonuc=x*y/ebob;
	  
  	return sonuc;
  }
  
   int kombinasyon(int x,int y){
   	int i,j,z,kom;
   	double fakx=1,faky=1,fakz=1;
   	for(i=x;i>0;i--){
   		fakx*=i;
	   }
	   for(j=y;j>0;j--){
	   	faky*=j;
	   }
	   z=x-y;

	   for(i=z;i>0;i--){
	   	fakz*=i;
	   }
	   kom=fakx/(faky*fakz);
   	return kom;
   }
  
  int main(){
  	
  	int sayi1,sayi2;
  	
  	printf("1.sayiyi giriniz:");
  	scanf("%d",&sayi1);
  	
  	printf("2.sayiyi giriniz:");
  	scanf("%d",&sayi2);
  	
  	ebob(sayi1,sayi2);
  	ekok(sayi1,sayi2);
  	kombinasyon(sayi1,sayi2);
  	
  	printf("ebob:%d\n",ebob(sayi1,sayi2));
  	printf("ekok:%d\n",ekok(sayi1,sayi2));
  	printf("kombinasyon:%d\n",kombinasyon(sayi1,sayi2));
  	return 0;
  }
