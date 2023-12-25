#include <stdio.h>


/* NxN lik bir matristeki verileri satýrlar sütün olacak þekilde yer deðiþtiriniz. Yazdýrma iþleminde yer deðiþikliði 
yapmayýnýz. */

int main(){
	int i,j,n,b=1;
	
	printf ("n degerini giriniz:");
	 scanf("%d",&n);
	
	 int matris[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matris[i][j]=b;
			b++;
			printf("%d\t",matris[i][j]);
		}printf("\n");
	}
	printf("\n");
	b=1;
		for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			printf("%d\t",matris[i][j]);
		}printf("\n");
	}
	return 0;
}
