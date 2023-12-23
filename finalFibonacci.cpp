#include <stdio.h>
#include <stdlib.h>

/* fibonacci ceviren fonk*/

 int fibonacci(int n){
 	int f[100];
 	int i;
 	
 	f[0]=1;
 	f[1]=1;
 	
 	for(i=0;i<n;i++){
 		f[i+2]=f[i+1]+f[i];
	 }
	 
	 return f[n-1];
 }

int main() {
	int n;
	
	printf("n degerini giriniz:");
	 scanf("%d",&n);
	 
	 fibonacci(n);
	 
	 printf("%d.fibonacci sayisi:%d",n,fibonacci(n));
	return 0;
}
