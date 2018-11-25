#include <stdio.h>

typedef struct stats {
		
	int vida;
	int mana;
	int exp;
	int nivel;
		
	}status;

void preencher(status* s);

int main(){
	
	status s;
	
	preencher(&s);
	
	printf("Vida: %d\nMana: %d\nNivel: %d\nExperiencia: %d",s.vida,s.mana,s.nivel,s.exp);
	
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
