#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Aþaðýdaki kelimeleri N>8 olmak üzere NxN lik bir char matrisine rastgele yerleþtiriniz.
Uygulamanýzýn özellikle N=9 olmasý durumunda çalýþmasý gerekmektedir.+
Kelimeler: SOFTWARE, COMPILER, FLUTTER, REACT
Kelime Yerleþtirme kurallarý:
1. Kelimeler 1 kez yerleþtirilecektir.+
2. Kelimelerin hepsinin yerleþtirilmesi gerekmektedir.+
3. Klasik Yerleþme iþlemi saða, sola, aþaðý yukarý olabilmektedir.+ (40P)
4. Çapraz Yerleþme iþlemi ise çapraz sað yukarý, çapraz sol yukarý, çapraz sað aþaðý ve çapraz sol 
yukarý olabilmektedir.+ (60P)
5. Yerleþme iþlemlerinden herhangi biri kullanýcý tarafýndan seçilecektir.
6. Seçim iþlemine göre 4 tane yönden her biri rastgele seçilerek sadece bir kelime için kullanýlacaktýr. 
7. Her bir kelimeye ait bir yön bilgisi olacaktýr. Örnek: FLUTTER için sað seçildi ise; diðer kelimeler 
için sað yön kullanýlmayacaktýr.
8. Arada kalan yerlere ise rastgele 1, 2 ve 3 karakterleri yerleþtirilecektir.
9. Sonuç olarak yerleþme iþlemi bitince matris gösterilecektir.*/

int main() {
	int n,secim,i,j,a,x,y,b,c;
	char kelime1[8]={'S','O','F','T','W','A','R','E'}; 
	char kelime2[8]={'C','O','M','P','I','L','E','R'};
	char kelime3[7]={'F','L','U','T','T','E','R'};
	char kelime4[5]={'R','E','A','C','T'};
	char matris[50][50];
	srand(time(NULL));
	printf("n degerini giriniz:");
	 scanf("%d",&n);
	 
	 if(n<=8){
	 	printf("gecerli bir n degeri giriniz.");
	 }
	
	 a=rand()%2; 
	
printf("------%da\n",a);
printf("------%di\n",i);printf("------%dj\n",j);printf("------%dx\n",x);printf("------%dy\n",y);
	 printf("1:klasik\n2:capraz\n");
	 	printf("yerlestirme sekli secin:");
	 	 scanf("%d",&secim);
	
		 
	
	 	switch(secim){
	 		case 1:if(a==1){ 
			 i=rand()%n/2;
	         j=rand()%n;
			 x=rand()%n/2;
	         y=rand()%n/2;
			matris[i][j]=kelime1[0],matris[i+1][j]=kelime1[1],matris[i+2][j]=kelime1[2],matris[i+3][j]=kelime1[3],matris[i+4][j]=kelime1[4],matris[i+5][j]=kelime1[5],matris[i+6][j]=kelime1[6],matris[i+7][j]=kelime1[7];
			matris[x][y]=kelime2[0],matris[x-1][y]=kelime2[1],matris[x-2][y]=kelime2[2],matris[x-3][y]=kelime2[3],matris[x-4][y]=kelime2[4],matris[x-5][y]=kelime2[5],matris[x-6][y]=kelime2[6],matris[x-7][y]=kelime2[7];
			matris[i][y]=kelime3[0],matris[i][y+1]=kelime3[1],matris[i][y+2]=kelime3[2],matris[i][y+3]=kelime3[3],matris[i][y+4]=kelime3[4],matris[i][y+5]=kelime3[5],matris[i][y+6]=kelime3[6];
			matris[x][j]=kelime4[0],matris[x][j-1]=kelime4[1],matris[x][j-2]=kelime4[2],matris[x][j-3]=kelime4[3],matris[x][j-4]=kelime4[4];
			 }
			 else{
			i=rand()%n;
	        j=rand()%n/2;
			x=rand()%n/2;
	        y=rand()%n/2;
			matris[i][j]=kelime1[0],matris[i-1][j]=kelime1[1],matris[i-2][j]=kelime1[2],matris[i-3][j]=kelime1[3],matris[i-4][j]=kelime1[4],matris[i-5][j]=kelime1[5],matris[i-6][j]=kelime1[6],matris[i-7][j]=kelime1[7];
			matris[x][y]=kelime2[0],matris[x+1][y]=kelime2[1],matris[x+2][y]=kelime2[2],matris[x+3][y]=kelime2[3],matris[x+4][y]=kelime2[4],matris[x+5][y]=kelime2[5],matris[x+6][y]=kelime2[6],matris[x+7][y]=kelime2[7];
			matris[i][y]=kelime3[0],matris[i][y-1]=kelime3[1],matris[i][y-2]=kelime3[2],matris[i][y-3]=kelime3[3],matris[i][y-4]=kelime3[4],matris[i][y-5]=kelime3[5],matris[i][y-6]=kelime3[6];
			matris[x][j]=kelime4[0],matris[x][j+1]=kelime4[1],matris[x][j+2]=kelime4[2],matris[x][j+3]=kelime4[3],matris[x][j+4]=kelime4[4];	
			}
		break;
	
			
			case 2:if(a==1){
			i=rand()%n;
	        j=rand()%n;
			x=rand()%n;
	        y=rand()%n;
			matris[i][j]=kelime1[0],matris[i+1][j+1]=kelime1[1],matris[i+2][j+2]=kelime1[2],matris[i+3][j+3]=kelime1[3],matris[i+4][j+4]=kelime1[4],matris[i+5][j+5]=kelime1[5],matris[i+6][j+6]=kelime1[6],matris[i+7][j+7]=kelime1[7];
			matris[x][y]=kelime2[0],matris[x-1][y-1]=kelime2[1],matris[x-2][y-2]=kelime2[2],matris[x-3][y-3]=kelime2[3],matris[x-4][y-4]=kelime2[4],matris[x-5][y-5]=kelime2[5],matris[x-6][y-6]=kelime2[6],matris[x-7][y-7]=kelime2[7];
			matris[i][y]=kelime3[0],matris[i+1][y+1]=kelime3[1],matris[i+2][y+2]=kelime3[2],matris[i+3][y+3]=kelime3[3],matris[i+4][y+4]=kelime3[4],matris[i+5][y+5]=kelime3[5],matris[i+6][y+6]=kelime3[6];
			matris[x][j]=kelime4[0],matris[x-1][j-1]=kelime4[1],matris[x-2][j-2]=kelime4[2],matris[x-3][j-3]=kelime4[3],matris[x-4][j-4]=kelime4[4];
	}
			else{
			i=rand()%n;
	        j=rand()%n;
			x=rand()%n;
	        y=rand()%n;
			matris[i][j]=kelime1[0],matris[i-1][j-1]=kelime1[1],matris[i-2][j-2]=kelime1[2],matris[i-3][j-3]=kelime1[3],matris[i-4][j-4]=kelime1[4],matris[i-5][j-5]=kelime1[5],matris[i-6][j-6]=kelime1[6],matris[i-7][j-7]=kelime1[7];
			matris[x][y]=kelime2[0],matris[x+1][y+1]=kelime2[1],matris[x+2][y+2]=kelime2[2],matris[x+3][y+3]=kelime2[3],matris[x+4][y+4]=kelime2[4],matris[x+5][y+5]=kelime2[5],matris[x+6][y+6]=kelime2[6],matris[x+7][y+7]=kelime2[7];
			matris[i][y]=kelime3[0],matris[i-1][y-1]=kelime3[1],matris[i-2][y-2]=kelime3[2],matris[i-3][y-3]=kelime3[3],matris[i-4][y-4]=kelime3[4],matris[i-5][y-5]=kelime3[5],matris[i-6][y-6]=kelime3[6];
			matris[x][j]=kelime4[0],matris[x+1][j+1]=kelime4[1],matris[x+2][j+2]=kelime4[2],matris[x+3][j+3]=kelime4[3],matris[x+4][j+4]=kelime4[4];	
			}	
			break; }
	 
	 for(b=0;b<n;b++){
	 	for(c=0;c<n;c++){
	 		if(matris[b][c]=='\0'){
	 			matris[b][c]='1';
			 }
	 		printf("%c\t",matris[b][c]);
		 }printf("\n");
	 }
		 
	
	
	return 0;
}
