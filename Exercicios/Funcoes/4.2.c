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

void todos_os_primos(int max){
  int j;
  for (j=1;j<=max;j++){
    if(eh_primo(j) == 1){
      printf("%d\n",j);
    }
  }
  
}


int main (void){
    int n;
    printf("Digite o numero: \n");
    scanf("%d",&n);
    todos_os_primos(n);
    return 0;
}
