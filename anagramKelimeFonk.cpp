#include <stdio.h>
#include <stdlib.h>

/* kendisinie parametre olarak gelen kelimelerin anagram olup olmadýðýný bulan fonk*/
    int sayac=0,kontrol=0;
int anagram(char kelime1[50],char kelime2[50]){
	char gecici[50];
	int i,j;
	for(i=0;kelime1[i]!='\0';i++){
		gecici[i]=kelime1[i];
	}
	for(i=0;kelime1[i]!='\0';i++){
		for(j=0;kelime2[j]!='\0';j++){
			if(gecici[i]==gecici[j]){
				sayac++;
			}
		}
	}
	
	for(i=0;kelime2[i]!='\0';i++){
		for(j=0;gecici[j]!='\0';j++){
				if(gecici[j]==kelime2[i]){
					sayac--;
		       if(kelime1[i]!=kelime2[i]){
		       	kontrol=1;
			   }
			}
		}
	}
	return sayac;
}
int main() {
	
	char k1[50],k2[50];
	
	printf("ilk kelimeyi giriniz:");
	 gets(k1);
	 
	printf("ikinci kelimeyi giriniz:");
	 gets(k2);
	
	anagram(k1,k2);
	
	if(sayac!=0 && kontrol==0){
		printf("kelimeler anagram degildir.");
	}
	
	else{
		printf("kelimeler anagramdir.");
	}
	return 0;
}
