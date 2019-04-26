#include <stdio.h>

void preenche(int arr[2][2], int l, int c){
  int i,j,num;
  for (i=0;i<l;i++){
    for (j=0;j<c;j++){
      printf("Digite o elemento [%d][%d]: ",i,j);
      scanf("%d",&num);
      arr[i][j] = num;
    }
  }
}

float media(int arr[2][2], int l, int c){
  int i,j,soma=0;
  for (i=0;i<l;i++){
    for (j=0;j<c;j++){
      soma += arr[i][j];
    }
  }
  return (soma/(l*c));
}

int main (void){
  int i,j,linhas,colunas;

  printf("Digite o numero de linhas do array: ");
  scanf("%d",&linhas);
  printf("Digite o numero de colunas do array: ");
  scanf("%d",&colunas); 

  int arry[linhas][colunas];
  preenche(arry,linhas,colunas);


  for (i=0;i<linhas;i++){
    for (j=0;j<colunas;j++){
      printf("%d ",arry[i][j]);
    }
  }
  printf("\nA media e: %f", media(arry,linhas,colunas));
  return 0;
}
