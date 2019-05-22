
#include <stdio.h>

struct ponto{
    int x;
    int y;
};

void preenchestruct(struct ponto* p){
    printf("Digite o x: \n");
    scanf("%d",&p->x);
    printf("Digite o y: \n");
    scanf("%d",&p->y);
}

void preenchevet(int* x,int*y){
    printf("Digite o ponto: \n");
    scanf("%d",&*x);
    scanf("%d",&*y);
}

void distante(int pt[]){
    int i ,x=0,y=0;
    for(i=0;i<40;i+=2){
        if((pt[i] + pt[i+1]) >= x + y){
            x = pt[i];
            y = pt[i+1];
        }
    }
    printf("O ponto mais distante é: (%d,%d)\n",x,y);
}
int main (void) {
    struct ponto novo_ponto;
    preenchestruct(&novo_ponto);
    printf("(%d,%d)\n",novo_ponto.x,novo_ponto.y);
    int vet[20],i;
    for(i=0;i<40;i+=2){
        preenchevet(&vet[i],&vet[i+1]);
    }
    for(i=0;i<40;i+=2){
        printf("(%d,%d)\n",vet[i],vet[i+1]);
    }

    distante(vet);

    return 0;
}
