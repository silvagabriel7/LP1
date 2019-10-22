/*Escrever um programa em C que calcule e imprima o número de caracteres distintos presentes em uma
cadeia de caracteres dada. Considerar o tamanho máximo da cadeia como sendo de 80 colunas.*/

#include <stdio.h>
#include <string.h>

int main(void){
    int cont = 0;
    char vet[80] = {"caracol"};
    int total = strlen(vet);
    for(int i = 0;i < total;i++){
        for(int j = i+1; j < total;j++){
            if(vet[i] == vet[j]){
                vet[i] = 0;
            }
        }
    }
    for(int i = 0;i < total;i++){
        if(vet[i] != 0){
            cont += 1;
        }
    }
    printf("%d\n",cont);
    
    return 0;
}
