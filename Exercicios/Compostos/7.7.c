#include <stdio.h>

struct produtos{
    char nome[50];
    double valor;
    int qtd;
};

void preenche(struct produtos* p){
    printf("Digite o nome do produto: \n");
    scanf("%s",p->nome);
    printf("Digite o valor do produto: \n");
    scanf("%lf",&p->valor);
    printf("Digite a quantidade: \n");
    scanf("%d",&p->qtd);
}

int main (void) {
    struct produtos prod1;
    preenche(&prod1);
    printf("%s,%f\n",prod1.nome,prod1.valor*prod1.qtd);
    return 0;
}
