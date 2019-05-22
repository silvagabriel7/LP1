
#include <stdio.h>

struct personagem{
    int id;
    struct posicao{
        int x;
        int y;
    }pos;
    int pontuacao;
};

int main (void) {
    struct personagem p1[10];
    for(int i=0;i<2;i++){
        printf("Personagem %d:\n\n",i+1);
        printf("Digite o id: \n");
        scanf("%d",&p1[i].id);
        printf("Digite a posicao: \n");
        scanf("%d",&p1[i].pos.x);
        scanf("%d",&p1[i].pos.y);
        printf("Digite a pontuacao: \n");
        scanf("%d",&p1[i].pontuacao);
    };
    for(int i=0;i<2;i++){
        printf("Personagem %d:\n\nid: %d\nposicao: (%d,%d)\npontuacao: %d\n\n",i+1,p1[i].id,p1[i].pos.x,p1[i].pos.y,p1[i].pontuacao);
    }
    return 0;
}
