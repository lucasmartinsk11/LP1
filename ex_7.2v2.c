#include <stdio.h>

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
	
	}personagem;
	
void preencher2(personagem* p);
void preencher(status* s);

int main(){
	personagem p;
	preencher2(&p);
	printf("\n\n\n");
	printf("Nome: %s\nClasse: %s\nVida: %d\nMana: %d\nNivel: %d\nExperiencia: %d\n",p.nome,p.classe,p.s.vida,p.s.mana,p.s.nivel,p.s.exp);
}

void preencher2(personagem* p){
	
	printf("Nome: ");
	scanf("%s",(*p).nome);
	printf("Classe: ");
	scanf("%s",(*p).classe);
	preencher(&(*p).s);
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
