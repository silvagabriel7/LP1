#include <stdio.h>

void compra(int* conta, int valor){
    *conta -= valor;
}


int main(void){

    int conta_um, conta_dois;
    printf("Digite o saldo da primeira conta: \n");
    scanf("%d",&conta_um);
    printf("Digite o saldo da segunda conta: \n");
    scanf("%d",&conta_dois);
    if (conta_um > conta_dois){
        compra(&conta_um,500);
    }else{
        compra(&conta_dois,500);
    }

    printf("Saldo da primeira conta: %d\n",conta_um);
    printf("Saldo da segunda conta: %d\n",conta_dois);
    return 0;
}
