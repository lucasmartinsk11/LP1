#include <stdio.h>

typedef struct box {
		int valor;
		struct box* prox;
		
	}caixa;

void exibe (caixa* c);
void remove_caixa(caixa* c, int indice);

int main(){
	
	caixa c1;
	caixa c2;
	caixa c3;
	caixa c4;
	caixa c5;
	
	c1.valor = 1;
	c1.prox = &c2;
	
	c2.valor = 2;
	c2.prox = &c3;
	
	c3.valor = 3;
	c3.prox = &c4;
	
	c4.valor = 4;
	c4.prox = &c5;
	
	c5.valor = 5;
	c5.prox = NULL;
	
	caixa* lista = &c1;
	
	exibe(lista);
	printf("\n\n\n\n");
	remove_caixa(lista, 2);
	lista = &c2;
	exibe(lista);
}

void exibe (caixa* c){
	for(;;){
		printf("Valor: %d\n",c->valor);
		if(c->prox == NULL){break;}
		else{c = c->prox;}
	}
}

void remove_caixa(caixa* c, int indice){
	
	caixa *atual, *ant;
	
	atual = c;
	ant = c;
	
	for(int i = 0; i < indice; i++){
		c = c->prox;//c2
		atual = c->prox;//c3
		c->prox = ant;//c2.prox <- c1
		ant->prox = atual;//c1.prox <-c3
		}
	
}
