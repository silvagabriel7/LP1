/*Um inteiro perfeito n é igual a soma de todos os seus divisores próprios. A faixa de seus divisores
próprios vai de 1 a (n-1). Por exemplo : 6 é um inteiro perfeito; a soma de todos os seus divisores próprios (
1 + 2 + 3) é igual a 6. Escreva um programa em C que determine se um número no intervalo de 1 a 32767 é
um inteiro perfeito.*/

#include <stdio.h>

int main(void){
    for(int i = 1;i <= 32767;i ++){
        int soma = 0;
        for(int j = 1;j < i;j++){
            if(i % j == 0){
                soma += j;
            }
        }
        if(soma == i){
            printf("O número %d é número perfeito\n", i);
        }
    }
    
    return 0;
}
