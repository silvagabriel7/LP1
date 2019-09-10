#include <stdio.h>

struct Aluno{
    char nome[20];
    float nota;
};

void preencher_aluno(struct Aluno* p){
    printf("Digite o nome do aluno: \n");
    scanf("%s",p->nome);
    printf("Digite a nota do aluno: \n");
    scanf("%f",&p->nota);
}

void calcular_media(struct Aluno* p, float m){
    if(p->nota > m){
        printf("%s com média %.1f\n",p->nome,p->nota);
    }
}

int main(void){
    int cont = 0;
    float soma = 0;
    float media_t;
    struct Aluno alunos[5];

    for(int i =0; i < 5; i++){
        preencher_aluno(&alunos[i]);
    }

    for(int i = 0; i < 5; i++){
        cont += 1;
        soma += alunos[i].nota;
    }

    media_t = soma/cont;
    printf("Média da turma: %.1f\n",media_t);

    for(int i = 0; i < 5; i++){
        calcular_media(&alunos[i], media_t);
    }

    return 0;
}
