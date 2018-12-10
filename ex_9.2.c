#include <stdio.h>

typedef struct box {
		int valor;
		struct box* prox;
		
	}caixa;

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
	
	printf("%d --> %d --> %d --> %d --> %d\n",	(*lista).valor,
												(*(*lista).prox).valor,
												(*(*(*lista).prox).prox).valor,
												lista->prox->prox->prox->valor,
												lista->prox->prox->prox->prox->valor
												);
}
