#include<stdio.h>

int main(){ 
   FILE *dosya;
   dosya=fopen("C:\\Users\\Bet�l DA�LI\\Desktop\\deneme.txt","r");
   char karakter;
   do{
   	karakter=getc(dosya);
   	
   	printf("%c",karakter);
   }
   while(karakter!=EOF);
   
   
return 0;
}
