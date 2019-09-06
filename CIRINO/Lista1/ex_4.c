#include <stdio.h>

int main(void){
    int n;
    int fat = 1;
    printf("Digite o número: \n");
    scanf("%d",&n);
    for(int i = n; i > 1; i--){
        fat = fat * i;
    }
    printf("O fatorial de %d é %d\n",n,fat);
    return 0;
}
