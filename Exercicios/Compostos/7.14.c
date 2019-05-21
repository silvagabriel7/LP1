#include <stdio.h>

struct Preco{
    int moeda;
    double valor;
};

union Moeda{
    double dolar;
    double real;
    double euro;
};

void exibe(struct Preco preco){
    char *resultado[3];
    resultado[0] = "Reais: R$%.2lf\n";
    resultado[1] = "Dólares: $%.2lf\n";
    resultado[2] = "Euros: R$%.2lf\n";
    printf(resultado[preco.moeda], preco.valor);
}

void troca(struct Preco preco, int novamoeda){
    union Moeda moeda;
    moeda.dolar = 1;
    moeda.real = 1.3;
    moeda.euro = 0.2;
    double _moeda[3];

    _moeda[0] = 1;
    _moeda[1] = 0.25;
    _moeda[2] = 0.22;
    
    if (novamoeda != preco.moeda){
        preco.valor = _moeda[novamoeda] * preco.valor;
        preco.moeda = novamoeda;
    }

    exibe(preco); 
}

int main (void) {
    struct Preco preco;
    int moeda;
    printf("Digite o valor: \n");
    scanf("%lf",&preco.valor);
    printf("Digite a moeda: \n");
    scanf("%d",&preco.moeda);
    exibe(preco);
    printf("Digite para qual moeda o valor sera atualizado: \n");
    scanf("%d",&moeda);
    troca(preco, moeda);
    return 0;
}
