#include<stdio.h>
#include<stdlib.h>

/*���NE YOLLANAN DE�ER�N �SS�N� ALIP GER� D�ND�REN PROGRAM*/

  int usalma(int taban,int us){
  	int i,x;
  	x=taban;
  	for(i=1;i<us;i++){
  		x*=taban;
	  }
	  return x;
  }

int main(){
	int taban,us;
	
	printf("taban giriniz:");
	 scanf("%d",&taban);
	 
	printf("us giriniz:");
	 scanf("%d",&us);
	 
	 usalma(taban,us);
	 
	 printf("sonuc:%d",usalma(taban,us));
	return 0;
}
