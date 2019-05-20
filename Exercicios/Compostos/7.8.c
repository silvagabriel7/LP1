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

void preenchevet(int* x, int* y){
    printf("Digite o ponto: \n");
    scanf("%d",&*x);
    scanf("%d",&*y);
}


int main (void) {
    struct ponto ponto1;
    preenchestruct(&ponto1);
    printf("(%d,%d)\n",ponto1.x,ponto1.y);
    int vet[2][2],i;
    for(i=0;i<5 ;i++){
        preenchevet(vet[i],vet[i]);
    }
    for(i=0;i<5;i++){
        printf("(%d,%d)",*vet[i],*vet[i]);
    }
    return 0;
}
