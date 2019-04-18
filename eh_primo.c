#include <stdio.h>

void eh_primo(int x){
    int i;
    int cont;
    for (i=1;i<=x;i++){
        if (x % i == 0){
          cont +=1;
        }
    }
    if (cont == 2 || cont == 1){
      printf("É PRIMO");
    }
    else{
      printf("NÃO É PRIMO");
    }
}

int main (void){
    int n;
    int res;
    printf("Digite o numero: \n");
    scanf("%d",&n);
    eh_primo(n);
    return 0;
}
