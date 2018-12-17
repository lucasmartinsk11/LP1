#include <string.h>


int main(){
	
	char string[25];
	
	FILE* f = fopen("/home/lucas/Área de Trabalho/ex_8.1.txt","w");

	for (int i = 0; i < 1; i++){
		
		printf("Digite uma string de ate 25 caracteres\n");
		scanf("%s",string);
		
		for(int j = 0; j < strlen(string); j++){
			fputc(string[j],f);
		}
	}
	
	fclose(f);
}
