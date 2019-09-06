#include <stdio.h>

struct Dados {
    int ano_de_nasc;
    union Sexo{
        char fem;
        char masc;
    }s;
    struct Proc {
        int sub;
        union {
            int capital;
            int interior;
            int out_estado;
        }p;
    };
};


void preenche(struct Dados* p){
    printf("Digite o ano de nascimento: \n");
    scanf("%d",&p->ano_de_nasc);

    printf("Digite o sexo: \n");
    scanf("%s",p->s);
    printf("Digite a procedência\n0-Capital\n1-Interior\n2-Outro Estado: \n");
}


int main(void){
    int n;
    printf("Digite as quantidades de pessoas: \n");
    scanf("%d",&n);
    struct Dados motoristas[n];
    for(int i = 0;i < n; i ++){
        preenche(&motoristas[i]);
    }
    
    return 0;
}
