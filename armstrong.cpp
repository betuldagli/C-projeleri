#include<stdio.h>
//girilen sayidan kucuk veya esit olan olan armstrong sayilarini bulan fonksiyon

	void armstrong(int a)
	{
		int x,y,i,j,sayac=0;
		
		for(i=100;i<=a;i++){
		     x=i;
			for(y=0;y<3;y++){
		    	j=i%10;
				sayac+=j*j*j;
				i/=10;
            }
            i=x;
			if(sayac==x){
			printf("%d armstrong sayidir\n",x);
		}
		sayac=0;	
			}	
		}
	int main(){
		int sayi;
		printf("3 basamakli bir sayi giriniz>>");
		scanf("%d",&sayi);
		armstrong(sayi);
		return 0;
	}
