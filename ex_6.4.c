#include <stdio.h> 
#include <stdlib.h> 

int strlen(); 

void main(){ 

	char string[100]; 
	int result  = 0; 
	printf("insert string: "); 
	//scanf("%s",&string); 
	gets(string); 
	printf("String: %s\n",string); 
	result = strlen(&string); 
	printf("Resultado: %d\n",result); 
} 

int strlen(char *str){ 

	int i = 0; 
	while(*(str+i) != '\0' ){ 
	 
	i++; 
	 
	} 
	return i; 

}
