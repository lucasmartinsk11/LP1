#include <stdio.h>

typedef struct car {
		
	int ano;
	char modelo[50];
	char cor[20];
		
	}carro;

int preencher(carro* p);

int main(){
	
	carro c;
	
	preencher(&c);
	
	printf("Ano: %d\n Modelo:%s\n Cor:%s\n", c.ano, c.modelo, c.cor);
	
}

int preencher(carro* p){
	
	printf("Digite o ano do carro:");
	scanf("%d", &(*p).ano);
	printf("Digite o modelo do carro:");
	scanf("%s", (*p).modelo);
	printf("Digite a cor do carro:");
	scanf("%s", (*p).cor);
	
	}
