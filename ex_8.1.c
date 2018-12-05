#include <stdio.h>
#include <string.h>
typedef struct people {
		char idade;
		char nome[26];
	}pessoa;

pessoa le(){
	
	pessoa p;
	printf("Digite a idade da pessoa: ");
	scanf("%hhd",&p.idade);
	printf("Digite o nome da pessoa: ");
	scanf("%s",p.nome);
	return p;
}

int main(){

	int N,i;
	pessoa ps[100];	
	printf("Digite a quantidade de pessoas a serem gravadas: ");
	scanf ("%d",&N);

	FILE* f = fopen("/tmp/guest-RODIkv/Área de Trabalho/ex_8.1.bin","wb");

	fwrite(&N,sizeof(int),1,f);
	
	for(i = 0; i < N;i++){
		int n;
		pessoa p = le();
		n = strlen(p.nome);
		fwrite(&p.idade,sizeof(char),1,f);
		fwrite(p.nome,sizeof(char),n+1,f);
	}		
	
	fclose(f);
