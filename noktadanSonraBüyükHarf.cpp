#include <stdio.h>
#include <stdlib.h>

/* KULLANICIDAN ALINAN CUMLENIN ���NDEK� NOKTADAN SONRAK� KEL�MELER�N �LK HARF�N� B�Y�K YAPAN PROGRAM
ASCII KAR�ILI�I 		��NOKTA�� = 46
A-Z = ��65�� � ��90��       a-z = �97�-�122� */

int main() {
	
	char cumle[50];
	int i;
	printf("cumle giriniz:");
	gets(cumle);
	
	printf("\ncumlenin eski hali:%s\n",cumle);
	for(i=0;cumle[i]!='\0';i++){
	//noktadan sonra b�y�k olsun diye
		if (cumle[i]==46){
		cumle[i+1]=cumle[i+1]-32;	
		}
		//ilk harf b�y�k olsun diye
		else if(cumle[0]>=90){
			cumle[0]=cumle[0]-32;
	    }
		    }
		    
		printf("cumlenin yeni hali :%s",cumle);
	

	return 0;
}

