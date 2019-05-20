#include <stdio.h>

struct Atleta{
    char nome[50];
    int idade;
    char habilidade[50];
};

void imprimir(struct Atleta* A){
    printf("-------------------------\n");
    printf("Nome: %s\n",A->nome);
    printf("Idade: %d\n",A->idade);
    printf("Habilidade: %s\n",A->habilidade);
    printf("\n");
}

int main(void){
    struct Atleta x = {"Ronaldinho", 25 , "Drible"};
    struct Atleta y = {"Ronaldo", 28, "Explosao"};
    struct Atleta z = {"Adriano", 26, "Chute"};
    imprimir(&x);
    imprimir(&y);
    imprimir(&z);
    return 0;
}
