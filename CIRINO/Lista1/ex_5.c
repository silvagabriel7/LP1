#include <stdio.h>

int main(void){
    float v;
    float r;
    printf("Digite o valor desejado: ");
    scanf("%f",&v);
    r = (v % 0.50);
    printf("%.2f de moedas de 1\n",v);
    printf("%.2f de moedas de 1: \n",r/100);
    
    return 0;
}
