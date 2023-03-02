#include<stdio.h>

int main(void){
	int nlinhas = 0;
	int c;
	int letra = 0;
	FILE *file;
	
	file = fopen("Eduardo.txt", "rt");

	
	while((c = fgetc(file)) != EOF){
		if(c  == '\n'){
			nlinhas++;
		}else{
			letra++;
		}
	}
	printf("letras: %d\n", letra);
	printf("Numero de linha: %d", nlinhas);
	
	int valor = fclose(file);
	if(valor != 0){
		printf("Programa nao fechado");
	}
	
	return 0;
}
