#include <stdio.h>

void preenche(int arr[4][2],int l, int c);
float media(int arr[4][2], int l, int c);

int main(){
	int arr[4][2];
	float m;
	
	preenche(arr,4,2);
	
	m = media(arr,4,2);
	printf("A media e: %f", m);
}

void preenche(int arr[4][2],int l, int c){
	for(int i =0; i < l; i++){
		for(int j =0; j < c; j++){
			printf("digite inteiros: ");
			scanf("%d",&arr[i][j]);
		}
	}
}
float media(int arr[4][2], int l, int c){
	float soma = 0.0;
	
	for(int i =0; i < l; i++){
		for(int j =0; j < c; j++){
			soma = soma + arr[i][j];
		}
	}
	
	return soma/(l*c);
}
