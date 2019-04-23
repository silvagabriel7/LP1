#include <stdio.h>

void compra(int* conta, int valor){
    *conta -= valor;
}


int main(void){

    int conta_um, conta_dois,i;
    int compras [] = {100, 50, 80, 30, 20};
    printf("Digite o saldo da primeira conta: \n");
    scanf("%d",&conta_um);
    printf("Digite o saldo da segunda conta: \n");
    scanf("%d",&conta_dois);
    for (i=0;i<5;i++){
        if (conta_um > conta_dois){
            compra(&conta_um,compras[i]);
        }else{
            compra(&conta_dois,compras[i]);
        }
        printf("Saldo da primeira conta: %d\n",conta_um);
        printf("Saldo da segunda conta: %d\n",conta_dois);
    }
    return 0;
}
