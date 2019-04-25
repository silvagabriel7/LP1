#include <stdio.h>


void preenche(int vet[], int n){
  int i,num;
  for (i=0;i<n;i++){
    printf("Digite os elementos do vetor: ");
    scanf("%d",&num);
    *(vet+i) = num;
  }
}

float media(int vet[], int n){
  int i,soma=0;
  for (i=0;i<n;i++){
    soma += *(vet+i);
  }
  return (soma/n);
}


int main (void){
  int i,x;
  printf("Digite o tamanho do vetor: ");
  scanf("%d",&x);
  int vetor[x];
  preenche(vetor,x);
  printf("O vetor:\n");
  for (i=0;i<x;i++){
    printf("%d ",*(vetor+i));
  }
  printf("\nA média é: %f", media(vetor,x));
  return 0;
}
