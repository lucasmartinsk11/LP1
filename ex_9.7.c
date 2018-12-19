#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct box {
		int valor;
		struct box* prox;
		
	}caixa;
void exibe (caixa* c);
void retira (caixa* c, int valor);

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
	retira(lista,n);
	printf("\n\n");
	exibe(lista);
}
void exibe (caixa* c){
	for(;;){
		printf("Valor: %d\n",c->valor);
		if(c->prox == NULL){break;}
		else{c = c->prox;}
	}
}

void retira (caixa* c, int valor){
	
	caixa* atual, *ant;
	ant = c;
	for(;;){
		
		if(c->valor == valor){
			atual = c->prox;//c3
			ant->prox = atual;//c1.prox <- c3
			free(c);
			break;
			}
		else if(c->prox == NULL){printf("não encontrado\n");break;}
		else{ant = c; c = c->prox;}
		
	}
	
}
