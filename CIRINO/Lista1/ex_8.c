#include <stdio.h>

int main(void){
    int a[51];
    int maior = 0;
    int segundo_maior = 0;
    for(int i = 0; i < 50; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < 50; i++){
        if(a[i] > maior){
            segundo_maior = maior;
            maior = a[i];
        }else{
            if(a[i] > segundo_maior){
                segundo_maior = a[i];
            }
        }
    }
    printf("O maior número é: %d\n", maior);
    printf("O segundo maior número é: %d\n", segundo_maior);

    return 0;
}
