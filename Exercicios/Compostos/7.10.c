
#include <stdio.h>

struct personagem{
    int id;
    struct posicao{
        int x;
        int y;
    }pos;
    int pontuacao;
};

/*void preencher(struct personagem* x,int i){
        printf("Personagem %d:\n\n",i+1);
        printf("Digite o id: \n");
        scanf("%d",&x->id);
        printf("Digite a posicao: \n");
        scanf("%d",&x->pos.x);
        scanf("%d",&x->pos.y);
        printf("Digite a pontuacao: \n");
        scanf("%d",&x->pontuacao);
}*/


int main (void) {
    /*struct personagem p1[10];
    for(int i=0;i<2;i++){
        preencher(&p1[i],i);
    };
    for(int i=0;i<2;i++){
        printf("Personagem %d:\n\nid: %d\nposicao: (%d,%d)\npontuacao: %d\n\n",i+1,p1[i].id,p1[i].pos.x,p1[i].pos.y,p1[i].pontuacao);
    }*/
    int jogo[11][11],i,j;
    printf("\n\n");
    for(i=1;i<11;i++){
        jogo[0][i] = i;
        jogo[i][0] = i;
    };
    for(i=0;i<11;i++){
        printf("%d",jogo[i][i]);
    }
    printf("\n\n");
    return 0;
}
