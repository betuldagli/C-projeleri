#include<stdio.h>

int main(){ 
   FILE *dosya;
   char karakter[50];
   dosya=fopen("C:\\Users\\Bet�l DA�LI\\Desktop\\deneme.txt","r");
    
    fgets(karakter,6,dosya);
    puts(karakter);
   
   
return 0;
}
