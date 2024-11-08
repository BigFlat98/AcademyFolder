#include <stdio.h>
void main(){



    	int  i, j, k=9;
	int a[5][5] = {0};
	for (i = 0; i < 5; i++) {
		for (j = i; j < 5; j++) {
			k = k + 1;
			a[i][j]=k;  // a[i][j]=++k;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
    


    
}