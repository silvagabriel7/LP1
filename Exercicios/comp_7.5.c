#include <stdio.h>

struct Ponto{
    int x;
    int y;
    int z;
};

int main(void){
    struct Ponto V1 = {1, 0, 5};
    struct Ponto V2 = {3, 3, 3};
    struct Ponto V3 = {0, 10, 0};
    printf("Coordenada y dos 3 pontos: (%d, %d, %d)\n",V1.y,V2.y,V3.y);
    V1.z += 10;
    V2.z += 10;
    V3.z += 10;
    printf("Coordenada z dos 3 pontos: (%d, %d, %d)\n",V1.z,V2.z,V3.z);
    printf("Coordenadas V2: (%d, %d, %d)\n",V2.x,V2.y,V2.z);
    return 0;
}
