#include <stdio.h>

struct Personagem{
    int forca;
    int energia;
    int experiencia;
};

struct Personagem preencheA(void){
    struct Personagem P;
    scanf("%d",&P.forca);
    scanf("%d",&P.energia);
    scanf("%d",&P.experiencia);
    return P;
};

int main(void){
    struct Personagem P1 = preencheA();
    struct Personagem P2 = preencheA();
    printf("%d %d %d vs %d %d %d",P1.forca,P1.energia,P1.experiencia,P2.forca,P2.energia,P2.experiencia);
    return 0;
}
