#include<stdio.h>
#include<stdlib.h>

int main(){
	int i;
	int *vetor = (int*) calloc(10, sizeof(int));
	
	if(vetor == NULL){
		printf("ERROR\n");
		exit(1);
	}
	
	for(i=0; i<10; i++){
		vetor[i]=i;
	}
	for(i=0; i < 10; i++){
		printf("%d ", vetor[i]);
	}
	free(vetor);
	
	return 0;
}
