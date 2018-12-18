#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strjoin(char* d, char* o1, char* o2);

int main(){
	char d[100];
	char o1[50];
	char o2[50];
	
	printf("Digite uma string de até 50 caracteres: ");
	scanf("%s",o1);
	printf("Digite uma string de até 50 caracteres: ");
	scanf("%s",o2);
	
	strjoin(d,o1,o2);
	
	printf("%s",d);
}
void strjoin(char* d, char* o1, char* o2){
	
	int cont1 = strlen(o1);
	
	for(int i = 0; i < cont1; i++){
		d[i] = o1[i];
	}
	int j = 0;
	for(int i = strlen(d);;i++){
		if(o2[j] == '\0'){d[i] = '\0'; break;}
		else{d[i] = o2[j];}
		j++;
		
	}
	
}
