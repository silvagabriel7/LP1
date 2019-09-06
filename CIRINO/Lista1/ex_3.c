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
