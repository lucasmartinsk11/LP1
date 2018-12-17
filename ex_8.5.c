#include <stdio.h>
#include <string.h>

typedef struct especi{
	int sub;
	union{
		int nivelclass;
		char circulo[30];
		char escola[40];
		};
	}especializacao;
typedef struct stats {
		
	int vida;
	int mana;
	int exp;
	int nivel;
		
	}status;
	
typedef struct avatar{
	
	char nome[30];
	char classe[30];
	status s;
	especializacao e;
	
	}personagem;

void preencher_espec(especializacao* e);
void preencher2(personagem* p);
void preencher(status* s);

int main(){
	personagem p;
/*-------------------------------------------------------------------------------------------------------------------------------------------*/	
	FILE* f = fopen("/home/lucas/Área de Trabalho/ex_8.5.bin", "wb");
/*-------------------------------------------------------------------------------------------------------------------------------------------*/		
	preencher2(&p);
	printf("\n\n\n");
	printf("Nome: %s\nClasse: %s\nVida: %d\nMana: %d\nNivel: %d\nExperiencia: %d\n",p.nome,p.classe,p.s.vida,p.s.mana,p.s.nivel,p.s.exp);
	if(p.e.sub == 1){
		printf("Nivel de Classe: %d\n",p.e.nivelclass);
	}
	else if(p.e.sub == 2){
		printf("Circulo Druidico: %s\n",p.e.circulo);
	}
	else if(p.e.sub == 3){
		printf("Escola de Magia: %s\n",p.e.escola);
	}
/*-------------------------------------------------------------------------------------------------------------------------------------------*/	
	fwrite(&p.nome, sizeof(char), strlen(p.nome), f);
	fwrite(&p.classe, sizeof(char), strlen(p.classe), f);
	fwrite(&p.s.vida, sizeof(int), 1, f);
	fwrite(&p.s.mana, sizeof(int), 1, f);
	fwrite(&p.s.exp, sizeof(int), 1, f);
	fwrite(&p.s.nivel, sizeof(int), 1, f);
	if(p.e.sub == 1){
		fwrite(&p.e.nivelclass, sizeof(int), 1, f);
	}
	else if(p.e.sub == 2){
		fwrite(&p.e.circulo, sizeof(int), 1, f);
	}
	else if(p.e.sub == 3){
		fwrite(&p.e.escola, sizeof(int), 1, f);
	}
	
	
	fclose(f);
/*-------------------------------------------------------------------------------------------------------------------------------------------*/	
	
}

void preencher_espec(especializacao* e){
	
	printf("1 - NivelClasse\n2 - Circulo Druidico\n3 - Escola de Magia\n");
	scanf("%d",&(*e).sub);
	if((*e).sub == 1){
		printf("Nivel de Classe: ");
		scanf("%d",&(*e).nivelclass);
	}
	else if((*e).sub == 2){
		printf("Circulo Druidico: ");
		scanf("%s",(*e).circulo);
	}
	else if((*e).sub == 3){
		printf("Escola de Magia: ");
		scanf("%s",(*e).escola);
	}
}

void preencher2(personagem* p){
	printf("Nome: ");
	scanf("%s",(*p).nome);
	printf("Classe: ");
	scanf("%s",(*p).classe);
	preencher(&(*p).s);
	preencher_espec(&(*p).e);
}

void preencher(status* s){
	
	printf("Vida: ");
	scanf("%d", &(*s).vida);
	printf("Mana: ");
	scanf("%d", &(*s).mana);
	printf("Nivel: ");
	scanf("%d", &(*s).nivel);
	printf("Experiencia: ");
	scanf("%d", &(*s).exp);
	
}
