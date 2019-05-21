
#include <stdio.h>

struct anfibios{
    int patas;
    double esp_pele;
    int cauda;
};
struct aves{
    double tam_bico;
    double auto_voo;
    double frenq_canto;
};
struct mamiferos{
    int dentes;
    double vol_cereb;
    double velocidade;
};
struct repteis{
    int venenoso;
    double auto_agua;
    double esp_ovos;
};

struct animais{
    int sub;
    union{
        struct anfibios novo_anfibio;
        struct aves novo_ave;
        struct mamiferos novo_mamifero;
        struct repteis novo_reptil;
    }a;
};

void preenche(struct animais* x){
    printf("Anfibios[1]\nAves[2]\nMamíferos[3]\nRépteis[4]\nEscolha qual classe de animal deseja preencher: \n");
    scanf("%d",&x->sub);
    switch(x->sub){
        case 1:
            printf("ANFIBIOS\n");
        break;
        case 2:
            printf("AVES\n");
        break;
        case 3:
            printf("MAMIFEROS\n");
        break;
        case 4:
            printf("REPTEIS\n");
        break;
        default:
            printf("ERRO\n");
    }
        
}


int main(void){
    int i;
    struct animais novo_animal1;
    preenche(&novo_animal1);
    struct animais novo_animal2;
    preenche(&novo_animal2);
    struct animais novo_animal3;
    preenche(&novo_animal3);
    struct animais novo_animal4;
    preenche(&novo_animal4);
    struct animais novo_animal5;
    preenche(&novo_animal5);
    struct animais novo_animal6;
    preenche(&novo_animal6);
    return 0;
}
