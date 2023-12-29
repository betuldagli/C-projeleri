#include <stdio.h>
#include <stdlib.h>

/*kendisine parametre olarak gelen metni yine kendisine parametre olarak gelen deðer kadar right rotated shift yapan fonksiyon kodunu
pointer aritmetiði kullanarak gerçekleþtiren fonksiyon kodunu yazýnýz.*/

void rightrotated(char metin[],int k){
	int sayac=0;
	for(sayac=0;metin[sayac]!='\0';sayac++);
	char gecici[1];

	for(int i=0;i<k;i++){
		gecici[0]=metin[sayac-1];
		for(int j=sayac-2;j>=0;j--){
			metin[j+1]=metin[j];
		}
			metin[0]=gecici[0];
	}
	printf("%s",metin);
}

int main(){
	char metin[50];
	int k;
	
	printf("metni giriniz:");
	gets(metin);
	
	printf("ne kadar kaydirmak istediginizi giriniz:");
	scanf("%d",&k);
	
	rightrotated(metin,k);
	
	
	return 0;
}
