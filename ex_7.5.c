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

void desenha_matriz(int m[10][10] );
void ler_posicao(personagem* p);
void preencher_personagem(personagem* p);	
void preencher_pontos(personagem* pp);
void preencher(ponto* p);

int main(){
	personagem p[10];
	preencher_pontos(&p);
	printf("\n");
	ler_posicao(&p);
}
void preencher_pontos(personagem* pp){
	int i;
	for(i = 0; i < 10; i++){
		preencher_personagem(&pp[i]);
	}
}
void preencher_personagem(personagem* p){
	int i;	
	(*p).identidade = i;
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
void ler_posicao(personagem* p){
	int i,j;
	int m[10][10];
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			m[i][j] = "";
		}
	}
	for(i = 0; i < 10; i++){
		m[p[i].c.x][p[i].c.y] = p[i].pontos; 
	}
	
	desenha_matriz(m);
}
void desenha_matriz(int m[10][10]){
	int i,j;	
	printf("   ");
	for(i = 0; i < 10; i++){printf("%.2d ",i);}
	printf("\n\n");
	for (i=0; i<10; i++) {
		printf("%.2d ",i);
		for (j=0; j<10; j++) {
			
			if(m[i][j] != ""){
				printf("%.2d ",m[i][j]);
			}else{printf("  ");}	
		}
	printf("\n\n");
	}	
}
