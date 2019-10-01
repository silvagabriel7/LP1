#include <stdio.h>

int main(void){
    int vet1[10];
    int vet2[10];
    int vet3[10];
    int vetor[30];
    int aux;
    printf("VETOR 1:\n");
    for(int i = 0;i < 10;i ++){
        scanf("%d",&vet1[i]);
    }
    printf("=============================\n");
    printf("VETOR 2:\n");
    for(int i = 0;i < 10;i ++){
        scanf("%d",&vet2[i]);
    }
    printf("=============================\n");
    printf("VETOR 3:\n");
    for(int i = 0;i < 10;i ++){
        scanf("%d",&vet3[i]);
    }
    printf("=============================\n");

    for(int i = 0;i < 10;i++){
        vetor[i] = vet1[i];
        vetor[i+10] = vet2[i];
        vetor[i+20] = vet3[i];
    }

    printf("=============================\n");
    printf("VETOR TOTAL ORDENADO:\n");
    for(int i = 0;i < 29;i ++){
        for(int j = (i+1); j < 30;j ++){
            if(vetor[j] < vetor[i]){
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    for(int i = 0;i < 29;i ++){
        printf("%d ",vetor[i]);
    }
    printf("\n");
    printf("=============================\n");
    return 0;
}
