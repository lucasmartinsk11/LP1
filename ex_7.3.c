#include <stdio.h>
#include <math.h>

typedef struct point{
	int x;
	int y;
	}ponto;
	
int retornar_distante(ponto* r);	
void preencher_pontos(ponto* pp);
void preencher(ponto* p);

int main(){
	ponto p[10];
	preencher_pontos(p);
	printf("Posicao: %d\nx = %d y = %d",retornar_distante(p)+1,p[retornar_distante(p)].x,p[retornar_distante(p)].y);
}
int retornar_distante(ponto* r){
	int cont = 0;
	float hip = 0;
	float hipm = 0;
	for(int i = 0; i < 10; i++){
		hip = sqrt((r[i].x*r[i].x)+(r[i].y*r[i].y));
		if(hip > hipm){
			cont = i;
			hipm = hip;
		}
	}
	return cont;
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
