#include <stdio.h>
#include <string.h>

void escreva_string(FILE* f,char* str);

int main(){
	
	char string[25];	
	FILE* f = fopen("/home/lucas/Área de Trabalho/ex_8.1.txt","w");
	
	for (int i = 0; i < 10; i++){
		
		printf("Digite uma string de ate 25 caracteres\n");
		scanf("%s",string);
		escreva_string(f,string);
	}
	
	fclose(f);
}

void escreva_string(FILE* f,char* str){

	for(int i = 0; i < strlen(str); i++){
		fputc(str[i],f);
	}
	
}
