#include <stdio.h>
#include <math.h>

typedef struct point{
	int x;
	int y;
	}ponto;
typedef struct persona{
	int identidade;
	int pontos;
	ponto c;
	}personagem;
	
void preencher_pontos(ponto* pp);
void preencher(ponto* p);

int main(){
	personagem p[10];
}
	
void preencher_pontos(ponto* pp){
	for(int i = 0; i < 10; i++){
		preencher(&(*(pp+i)));
	}
}
void preencher(ponto* p){
	printf("Coordenada x: ");
	scanf("%d", &(*p).x);
	printf("Coordenada y: ");
	scanf("%d", &(*p).y);
}
