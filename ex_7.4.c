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

void preencher_personagem(personagem* p);	
void preencher_pontos(personagem* pp);
void preencher(ponto* p);

int main(){
	personagem p[10];
	preencher_pontos(&p);
}
	
void preencher_pontos(personagem* pp){
	int i;
	for(i = 0; i < 10; i++){
		preencher_personagem(&pp[i]);
	}
}
void preencher_personagem(personagem* p){
	int i;	
	(*p).identidade = i+1;
	printf("Digite a pontuacao do personagem %d: ",(*p).identidade);
	scanf("%d",&(*p).pontos);
	preencher(&(*p).c);
	i++;
}
void preencher(ponto* p){
	printf("Coordenada x: ");
	scanf("%d", &(*p).x);
	printf("Coordenada y: ");
	scanf("%d", &(*p).y);
}
