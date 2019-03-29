#include <stdio.h>

int main(void){
    float soma = 0;
    int qtd;
    printf("Numero de moedas de 1 real: \n");
    scanf("%d", &qtd);
    soma += qtd;
    printf("Numero de moedas de 50 cents: \n");
    scanf("%d", &qtd);
    soma += qtd*0.5;
    printf("Numero de moedas de 25 cents: \n");
    scanf("%d", &qtd);
    soma += qtd*0.25;
    printf("Numero de moedas de 10 cents: \n");
    scanf("%d", &qtd);
    soma += qtd*0.1;
    printf("Numero de moedas de 5 cents: \n");
    scanf("%d", &qtd);
    soma += qtd*0.05;
    printf("Numero de moedas de 1 cent: \n");
    scanf("%d", &qtd);
    soma += qtd*0.01;
    printf("Quantia total calculada: R$%f",soma);
    return 0;
}
