#include <stdio.h>

int main(void){
    int num,soma=0;
    printf("Escolha um numero: \n");
    scanf("%d",&num);
    while (num > 0){
        soma = (soma + num);
        num = (num - 1);
    }
    printf("somou: %d",soma);
    return 0;
}
    
