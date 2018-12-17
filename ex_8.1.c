#include <stdio.h>
#include <string.h>


int main(){
	
	char string[25];
	int tamanho_string;
	
	FILE* f = fopen("/home/lucas/Área de Trabalho/ex_8.1.txt","w");
	
	printf("Digite uma string de ate 25 caracteres\n");
	scanf("%s",string);
	tamanho_string = strlen(string);
	for(int i = 0; i < tamanho_string; i++){
		fputc(string[i],f);
	}
	
	fclose(f);
}
