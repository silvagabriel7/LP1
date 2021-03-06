/*Escreva um programa em C onde, se possa representar os nomes e as notas de alunos de um curso da
universidade. O programa deverá imprimir os nomes dos cinco alunos que obtiverem as maiores notas
acima da média da turma. Considerar que a turma tenha 50 alunos. Usar a estrutura multivalorada vista em
sala de aula.*/

#include <stdio.h>
#include <string.h>

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

int main(void){
    int cont = 0;
    float soma = 0;
    float media_t;
    float aux_f;
    char aux_c[20];
    struct Aluno alunos[50];

    for(int i = 0; i < 50; i++){
        preencher_aluno(&alunos[i]);
        cont += 1;
        soma += alunos[i].nota;
    }

    media_t = soma/cont;
    printf("Média da turma: %.1f\n",media_t);


    for(int i = 0; i < cont; i++){
        printf("%s %.1f\n",alunos[i].nome,alunos[i].nota);
    }
    
    for(int i = 0;i < cont-1;i++){
        for(int j = i+1;j < cont;j++){
            if(alunos[i].nota < alunos[j].nota){
                aux_f = alunos[i].nota;
                alunos[i].nota = alunos[j].nota;
                alunos[j].nota = aux_f;


                strcpy(aux_c,alunos[i].nome);
                strcpy(alunos[i].nome,alunos[j].nome);
                strcpy(alunos[j].nome,aux_c);
            }
        }
    }
    printf("================================");
    printf("\n");
    printf("Alunos acima da média\n");

    for(int i = 0;i < 5;i++){
        if(alunos[i].nota > media_t){
            printf("%s %f\n",alunos[i].nome,alunos[i].nota);
        }
    }
    return 0;
}
