#include <stdio.h>
#include <string.h>


int main(){
	
	char string[25];
	
	FILE* f = fopen("/home/lucas/Área de Trabalho/ex_8.1.txt","r");
	for(int i = 0;; i++){
		
		string[i] = fgetc(f);
		if(string[i] == '\0'){break;}
	}
	printf("%s",string);
	fclose(f);
}
