/* Escreva um programa em C que encontre o menor inteiro positivo n que atenda as seguintes condições :
    n / 3 = x inteiro e resto 2
    n / 5 = y inteiro e resto 3
    n / 7 = z inteiro e resto 4*/

#include <stdio.h>

int main(void){
    int f = 0;
    int n = 0;
    while(f == 0){
        n += 1;
        if(n%3 == 2 && n%5 == 3 && n%7 == 4){
            f = n;
        }
    }
    printf("O número é %d\n",f);
    
    return 0;
}
