#include<stdio.h>

int main(){ 
   FILE *dosya;
   char karakter[50];
   dosya=fopen("C:\\Users\\Betül DAÐLI\\Desktop\\deneme.txt","r");
    
    fgets(karakter,6,dosya);
    puts(karakter);
   
   
return 0;
}
