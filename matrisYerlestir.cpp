#include <stdio.h>
#include <stdlib.h>

/*NxN lik bir matris içinde verileri sýrasýyla aþaðýdaki formda yerleþtiriniz. */

int main() {
	int n,i,j,b=1;
	
	printf("n degerini giriniz:");
	 scanf("%d",&n);
	 
	int a[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=b;
			b++;
			printf("%d\t",a[i][j]);
		
		}printf("\n");
	}
	printf("\n\n");
		for(j=n-1;j>=0;j--){
	    	for(i=n-1;i>=0;i--){
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
	
	return 0;
}

