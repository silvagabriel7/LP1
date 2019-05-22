
#include <stdio.h>


union ponto_no_espaco{
    int vet[3];
    struct ponto{
        int x;
        int y;
        int z;
    }pt;
};

int main(void){
    union ponto_no_espaco novo_ponto;
    novo_ponto.pt.x = 1;
    novo_ponto.pt.y = 2;
    novo_ponto.pt.z = 3;
    union ponto_no_espaco novo_ponto2;
    novo_ponto2.vet[0] = 3;
    novo_ponto2.vet[1] = 2;
    novo_ponto2.vet[2] = 1;
    union ponto_no_espaco novo_ponto3;
    novo_ponto3.pt.x = 9;
    novo_ponto3.vet[1] = 8;
    novo_ponto3.pt.z = 7;
    printf("Ponto 1 (%d,%d,%d)\n",novo_ponto.pt.x,novo_ponto.pt.y,novo_ponto.pt.z);
    printf("Ponto 2 (%d,%d,%d)\n",novo_ponto2.vet[0],novo_ponto2.vet[1],novo_ponto2.vet[2]);
    printf("Ponto 3 (%d,%d,%d)\n",novo_ponto3.pt.x,novo_ponto3.vet[1],novo_ponto3.pt.z);
    return 0;
}
