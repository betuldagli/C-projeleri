#include <stdio.h>
#include <stdlib.h>
/*bagaj aþým ücreti*/
int main() {
	
	int bagaj,el;
	float ucret;
	
	printf("bagajdaki esyalarin kilosunu giriniz:");
	 scanf("%d",&bagaj);
	printf("elinizdeki esyalarin kilosunu giriniz:");
	 scanf("%d",&el);
	ucret=(bagaj-15)*5+(el-8)*5;
	if (bagaj>15 || el>8){
		printf("assim ucretiniz: %f",ucret);}
		 
	else {
	printf("asim ucretiniz yoktur");}
	
	return 0;
}
