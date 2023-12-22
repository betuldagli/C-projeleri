#include <stdio.h>
#include <stdlib.h>


 void degistir(int x,int y){
 	int gecici=x;
 	x=y;
 	y=gecici;
 	printf("x:%d\ty:%d\n",x,y);

 }

int main() {
	int x=5,y=10;
	printf("x ve y'nin ilk degerleri:\nx:%d\ty:%d\n",x,y);
	printf("x ve y'nin yer degistirilmis hali:\n");
	degistir(x,y);
	return 0;
}
