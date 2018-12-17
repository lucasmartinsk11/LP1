#include <stdio.h>
#include <string.h>


int main(){
	
	char string[25];
	
	FILE* f = fopen("/home/lucas/Área de Trabalho/ex_8.1.txt","r");
	printf("estouaqui - 1\n");
	for(int i = 0;; i++){
		
		string[i] = fgetc(f);
		if(string[i] == '\0'){break;}
	}
	printf("estouaqui - 2\n");
	printf("%s",string);
	fclose(f);
}
