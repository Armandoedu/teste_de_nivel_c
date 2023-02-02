#include<stdio.h>

int mult(int x, int y){
	return x * y;
}


int soma(int a, int b){
	return a + b;
}


void calculo(int x, int y,int(*ponteiro)(int, int)){
	
	
	return (*ponteiro)(x, y);
	
}


int main(){
	int result = calculo(5, 5, mult);
	int resultado = calculo(5, 3, soma);
	
	printf("Resultado: %d\n", resultado);
	printf("Resultado: %d", result);
}
