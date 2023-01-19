#include <stdio.h>

void inverte(int vetor[], int n){
    
    int aux[n];
    int i;
    for ( i = 0; i < n; i++)
    {
        aux[i] = vetor[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        vetor[i] = aux[n - 1 - i];
    }
    
}

int main(){
    int vetor[5]={1,2,3,4,5};
	int cont;
    inverte(vetor, 5);
    
	for(cont = 0; cont < 5; cont++){
    	printf("%d ", vetor[cont]);
	}
}
