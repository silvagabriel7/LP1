/*O troco em moedas é uma combinação de moedas com os seguintes valores :
R$ 1,00 ; 0,50; 0,25; 0,10; 0,05; 0,01
Escreva um programa em C que leia qualquer valor em centavos (R$0,01 até R$1,00). Calcule e imprima
seu equivalente em moedas. Encontre a solução que utilize o menor número possível de moedas.*/

#include <stdio.h>

int main(void){
    float v;
    int m1=100, m2=50, m3=25, m4=10, m5=5, m6=1;
    int nv;
    printf("Digite o valor desejado:");
    scanf("%f",&v);
    nv = v*100;
    printf("O troco em moedas será:\n");
    v = nv / m1;
    printf("%.0f de 1 real\n",v);
    nv = nv % m1;
    v = nv / m2;
    printf("%.0f de 0.50 centavos\n",v);
    nv = nv % m2;
    v = nv / m3;
    printf("%.0f de 0.25 centavos\n",v);
    nv = nv % m3;
    v = nv / m4;
    printf("%.0f de 0.10 centavos\n",v);
    nv = nv % m4;
    v = nv / m5;
    printf("%.0f de 0.05 centavos\n",v);
    nv = nv % m5;
    v = nv / m6;
    printf("%.0f de 0.01 centavos\n",v);
    
    return 0;
}
