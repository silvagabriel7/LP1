#include <stdio.h>

int main(void){
    int cont = 0;
    int n = 0;
    printf("Digite o número: ");
    scanf("%d",&n);
    for(int i = n;i >= 1;i --){
        if(n % i == 0){
            cont += 1;
        }
    }
    
    if (cont == 2){
        printf("O número %d é primo\n",n);
    }else{
        printf("O número %d não é primo\n",n);
    }
    return 0;
}
