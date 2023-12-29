#include <stdio.h>
#include <stdlib.h>

/* satranc tahtasý*/

int main() {

    for (int i=1;i<=8;i++){
		for (int j=1;j<=8;j++){
			if ((i+j)%2==0) printf("%c",219); else printf(" ");
		}
        printf("\n");
	}	      	

	return 0;
}
