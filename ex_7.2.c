#include <stdio.h>

struct Carro {	
	int ano;
	char modelo[50];
	char cor[20];
};
	
typedef struct Detran{
	char estado[30];
	char cidade[30];
	struct Carro carro;
} Detran;

void preencher(struct Carro* p){
	
	printf("Digite o ano do carro:");
	scanf("%d", &(*p).ano);
	printf("Digite o modelo do carro:");
	scanf("%s", (*p).modelo);
	printf("Digite a cor do carro:");
	scanf("%s", (*p).cor);
	
}

void preencher2(Detran* d){

	printf("Digite o estado onde se encontra o carro: ");
	scanf("%s",(*d).estado);
	printf("Digite o municipio inde se encontra o carro: ");
	scanf("%s",(*d).cidade);
	preencher(&(*d).carro);

}

int main (){

Detran detranrj;

preencher2(&detranrj);
printf("%s\n",detranrj.estado);
printf("%s\n",detranrj.cidade);
printf("%d\n",detranrj.carro.ano);
printf("%s\n",detranrj.carro.modelo);
printf("%s\n",detranrj.carro.cor);


}
