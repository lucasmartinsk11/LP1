#include <stdio.h>

void compra(int* conta,int* conta2,int quant);

int main (){
    
    int minha_conta = 0;    
    int minha_conta2 = 0;
    int quant = 0;
    printf("Digite o valor da primeira conta:\n");
    scanf("%d",&minha_conta);
    printf("Digite o valor da segunda conta:\n");
    scanf("%d,",&minha_conta2);
    printf("Digite a quantidade de compras:\n");
    scanf("%d,",&quant);
    
    compra(&minha_conta,&minha_conta2,quant);
  
}




void compra(int* conta,int* conta2,int quant){
    
    int valor[quant],total = 0;
    for(int i = 0; i < quant; i++){
        
        printf("Digite o valor da compra:\n");
        scanf("%d,",&valor[i]);
        
    }
    for(int j = 0; j < quant; j++){
			total = total + valor[j];
		}	
    
        
        if(*conta > *conta2){*conta = *conta - total;}
        else{*conta2 = *conta2 - total;}
        printf("Valor debitado: R$ %d,00\n Valor da primeira conta: R$ %d,00\n Valor da segunda conta: R$ %d,00",total,*conta,*conta2);
    
    
    
}
