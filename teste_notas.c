#include <stdio.h>

int main(void){
    int i;
    float soma=0,media;
    char alunos[50],not,cont=0;
    for (i=0;i<50;i++){
        printf("Digite a nota do aluno: \n");
        scanf("%hhd",&not);
        alunos[i] = not;
        soma += not;
    }
    media = soma/50;
    printf("media: %f\n",media);
    for (i=0;i<50;i++){
        if( alunos[i] > media){
            cont += 1;
        }
    }
    printf("%d\n",cont);
    return 0;
}

    
    
        
    
