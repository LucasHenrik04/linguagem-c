#include <stdio.h>

int main(){
	int matri[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j;
	
	printf("imprimindo a primeira linha:\n");
	for(j=0; j<3; j++){
		printf("%d ", matri[0][j]);
	}
	
	printf("\n\nImprimindo a matriz toda:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", matri[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
}
