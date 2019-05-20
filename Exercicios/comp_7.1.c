#include <stdio.h>

struct Personagem{
    int forca;
    int energia;
    int experiencia;
};

int main(void){
    struct Personagem P1;
    P1.forca = 10;
    P1.energia = 50;
    P1.experiencia = 30;
    struct Personagem P2 = {18,20,25};
    printf("%d %d %d vs %d %d %d",P1.forca,P1.energia,P1.experiencia,P2.forca,P2.energia,P2.experiencia);
    return 0;
}
