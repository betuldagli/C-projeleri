#include<stdio.h>

int main(){ 
   FILE *dosya;
   dosya=fopen("C:\\Users\\Bet�l DA�LI\\Desktop\\deneme.txt","w");
   
   putc('b',dosya);
   putc('\n',dosya);
   putc('d',dosya);
   
   
return 0;
}
