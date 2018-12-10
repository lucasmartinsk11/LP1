#include <stdio.h>

int preencher();
int remover_valor();

int main(){
	int vet[5];
	for(int i = 0; i < 5; i++){
		preencher(&vet[i]);
		}
	for(int j = 0; j < 5; j++){
		printf("%d;",vet[j]);
		}
	printf("\n");	
	remover_valor(&vet);
	for(int j = 0; j < 4; j++){
		printf("%d;",vet[j]);
		}	
}
int preencher(int* p){
	
	printf("Lendo: ");
	scanf("%d",&(*p));
	
}
int remover_valor(int* p){
	
	int I;
	
	printf("Digite a posicao a ser retirada");
	scanf("%d",&I);
	
	for(int i = I; i < 4; i++){
		p[i] = p[i+1];
		}
	
}
