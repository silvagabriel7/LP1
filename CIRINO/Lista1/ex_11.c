/*Escrever um programa em C que leia uma cadeia de caracteres e imprima todas as palavras que
contenham três ou mais vogais.*/

#include <stdio.h> 
#include <string.h>

int main(void){
    int len;
    char palavras[5][15] = {"banheira", "rato", "sol", "parede", "tudo"};
    char vogais[10] = {"AaEeIiOoUu"};
    for(int i = 0;i < 5;i++){
        int cont = 0;
        len = strlen(palavras[i]);
        for(int j = 0; j < len;j++){
            for(int k = 0; k < 10; k++){
                if(palavras[i][j] == vogais[k]){
                    cont += 1;
                }
            }
                
        }
        if(cont >= 3){
            printf("%s\n",palavras[i]);
        }
    }
    
    return 0;
}
    
