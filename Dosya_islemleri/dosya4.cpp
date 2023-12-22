#include<stdio.h>

int main(){ 
   FILE *dosya;
   char veri[20]="betul";
   char veri1[20]="dagli";
   char veri2[2]="\n";
   dosya=fopen("C:\\Users\\Betül DAÐLI\\Desktop\\deneme1.txt","w");
    
    fputs(veri,dosya);
    fputs(veri2,dosya);
    fputs(veri1,dosya);
   

   
return 0;
}
