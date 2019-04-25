#include <stdio.h>

void preenche(int arr[2][2], int l, int c){
  int i,j,num;
  for (i=0;i<l;i++){
    for (j=0;j<c;j++){
      printf("Digite o elemento do [%d][%d]: ",i,j);
      scanf("%d",&num);
      arr[i][j] = num;
    }
  }
}

/*float media(int vet[], int n){
  int i,soma=0;
  for (i=0;i<n;i++){
    soma += *(vet+i);
  }
  return (soma/n);
}*/

int main (void){
  int i,j,linhas,colunas;

  printf("Digite o numero de linhas do array: ");
  scanf("%d",&linhas);
  printf("Digite o numero de colunas do array: ");
  scanf("%d",&colunas); 

  int arry[linhas][colunas];
  preenche(arry,linhas,colunas);

  printf("O array: %d\n",arry[0][0]);
  printf("O array: %d\n",arry[0][1]);
  printf("O array: %d\n",arry[1][0]);
  printf("O array: %d",arry[1][1]);

  /*for (i=0;i<linhas;i++){
    for (j=0;j<colunas;j++){
      printf("%d ",arry[i][j]);
    }
  }
  printf("\nA média é: %f", media(vetor,x));*/
  return 0;
}
