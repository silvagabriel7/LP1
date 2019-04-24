#include <stdio.h>

int eh_primo(int x){
    int i;
    int cont=0;
    for (i=1;i<=x;i++){
        if (x % i == 0){
          cont +=1;
        }
    }
    if (cont == 2){
      return 1;
    }else{
      return 0;
    }
}

int main (void){
    int n;
    printf("Digite o numero: \n");
    scanf("%d",&n);
    if (eh_primo(n) == 1){
      printf("%d É primo",n);
    }else{
      printf("%d Não é primo",n);
    }
    return 0;
}
