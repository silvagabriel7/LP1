
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

int main(void){
    struct animais novo_animal1;
    novo_animal1.a.novo_anfibio.patas = 10;
    novo_animal1.a.novo_anfibio.cauda = 1;
    novo_animal1.a.novo_anfibio.esp_pele = 4.2;
    struct animais novo_animal2;
    novo_animal2.a.novo_ave.tam_bico = 5;
    novo_animal2.a.novo_ave.auto_voo = 2.5;
    novo_animal2.a.novo_ave.frenq_canto= 4.2;
    struct animais novo_animal3;
    novo_animal3.a.novo_mamifero.dentes = 20;
    novo_animal3.a.novo_mamifero.vol_cereb = 5.3;
    novo_animal3.a.novo_mamifero.velocidade = 58.9;
    struct animais novo_animal4;
    novo_animal4.a.novo_reptil.venenoso = 1;
    novo_animal4.a.novo_reptil.auto_agua = 1.7;
    novo_animal4.a.novo_reptil.esp_ovos = 0.6;
    struct animais novo_animal5;
    novo_animal5.a.novo_ave.tam_bico= 21;
    novo_animal5.a.novo_ave.auto_voo= 2.1;
    novo_animal5.a.novo_ave.frenq_canto = 7.9;
    struct animais novo_animal6;
    novo_animal6.a.novo_mamifero.dentes= 13;
    novo_animal6.a.novo_mamifero.vol_cereb= 1.4;
    novo_animal6.a.novo_mamifero.velocidade= 21;
    return 0;
}
