#include<stdio.h>
#include<stdlib.h>


int main(void){
	int linhas = 3;
	int coluna = 3;
	int **matriz = (int**) malloc(linhas * sizeof(int*));
	int i;
	int j;
	for(i=0;i<linhas;i++){
		matriz[i] = (int*) malloc(coluna*sizeof(int));
	}
	for(i=0;i<linhas;i++){
		for(j=0;j<coluna;j++){
			matriz[i][j] = i*3 + j+1;
		}
	}
	for(i=0;i<linhas;i++){
		for(j=0;j<coluna;j++){
			printf("%d ", matriz[i][j]);
		}
	}
	for(i=0;i<linhas;i++){
		free(matriz[i]);
	}
	free(matriz);
	return 0;
}
