#include <stdio.h>
#include <stdlib.h>

/* iki sayinin en buyuk ortak bolenini bulan program*/

int main() {
	
	int i,sayi1,sayi2,enkucuk,sonuc;
 
	printf("sayilari giriniz:");
	 scanf("%d %d",&sayi1,&sayi2);
	 
	 if(sayi1<sayi2){
	 	enkucuk=sayi1;
	 }
	 else if(sayi2<sayi1){
	 	enkucuk=sayi2;
	 }
	 else{
	 	enkucuk=sayi1;
	 }
	for(i=1;i<=sayi1;i++){
		if(sayi1%i==0 && sayi2%i==0){
	sonuc=i;
    	}
	}
	printf("sonuc:%d",sonuc);	
		return 0;
}
