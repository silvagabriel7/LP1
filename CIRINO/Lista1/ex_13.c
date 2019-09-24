#include <stdio.h>

int main(void){
    int vet1[10];
    int vet2[10];
    int vet3[10];
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
    for(int i = 0;i < 9;i ++){
        for(int j = (i+1); j < 10;j ++){
            if(vet1[j] < vet1[i]){
                aux = vet1[j];
                vet1[j] = vet1[i];
                vet1[i] = aux;
            }
            if(vet2[j] < vet2[i]){
                aux = vet2[j];
                vet2[j] = vet2[i];
                vet2[i] = aux;
            }
            if(vet3[j] < vet3[i]){
                aux = vet3[j];
                vet3[j] = vet3[i];
                vet3[i] = aux;
            }
        }
    }
    printf("VETOR 1:\n");
    for(int i = 0;i < 10;i ++){
        printf("%d\n",vet1[i]);
    }
    printf("=============================\n");
    printf("VETOR 2:\n");
    for(int i = 0;i < 10;i ++){
        printf("%d\n",vet2[i]);
    }
    printf("=============================\n");
    printf("VETOR 3:\n");
    for(int i = 0;i < 10;i ++){
        printf("%d\n",vet3[i]);
    }
    
    printf("=============================\n");
    return 0;
}
