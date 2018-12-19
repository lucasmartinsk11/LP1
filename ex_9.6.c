#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct box {
		int valor;
		struct box* prox;
		
	}caixa;
void exibe (caixa* c);
int contem (caixa* c, int valor);

int main(){ 
	
	caixa* lista = NULL;
	caixa* ult;
	
	for(;;){
		int n;
		printf("Digite inteiros e -1 para parar: ");
		scanf("%d",&n);
		
		if(n == -1){break;}
		caixa* c = (caixa*) malloc(sizeof(caixa));
		c->valor = n;
		c->prox = NULL;
		
		if(lista == NULL){
			lista = c;
		}
		else{
			ult->prox = c;
		}
		ult = c;
	}
	int n;
	exibe(lista);
	printf("\n\n");
	printf("Difite um inteiro para pesquisalo ");
	scanf("%d",&n);
	int valor = contem(lista,n);
	printf("%d",valor);
}
void exibe (caixa* c){
	for(;;){
		printf("Valor: %d\n",c->valor);
		if(c->prox == NULL){break;}
		else{c = c->prox;}
	}
}

int contem (caixa* c, int valor){
	
	for(;;){
		
		if(c->valor == valor){return c->valor;}
		else if(c->prox == NULL){printf("não encontrado\n");return -1;}
		else{c = c->prox;}
	}
	
}
