
#include <stdio.h>

struct animais{
    int sub;
    union animal{
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
    };
};

void preenche(struct animais* a){
    printf("Anfibios[1]\nAves[2]\nMamíferos[3]\nRépteis[4]\nEscolha qual classe de animal deseja preencher: \n");
    scanf("%d",a->sub);
    switch(a->sub){
        case 1:
            printf("ANFIBIOS");
        break;
        case 2:
            printf("AVES");
        break;
        case 3:
            printf("MAMIFEROS");
        break;
        case 4:
            printf("REPTEIS");
        break;
    }
        
}



int main(void){
    struct animais novo_animal1;
    exibe(&novo_animal1);
    struct animais novo_animal2;
    exibe(&novo_animal2);
    struct animais novo_animal3;
    exibe(&novo_animal3);
    struct animais novo_animal4;
    exibe(&novo_animal4);
    struct animais novo_animal5;
    exibe(&novo_animal5);
    struct animais novo_animal6;
    exibe(&novo_animal6);

    return 0;
}
