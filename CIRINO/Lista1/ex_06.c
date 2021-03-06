/*Um motorista acaba de retornar de um feriado prolongado. Em cada parada de reabastecimento ele
registrou a leitura de seu odômetro, a quantidade de gasolina comprada (suponha que ele tenha enchido o
tanque cada vez) e o preço pago. Além disso, suponha também que ele tenha enchido o tanque antes de
partir e imediatamente após retornar. Escreva um programa em C para ler, em primeiro lugar, o número total
de reabastecimentos feitos (incluindo o primeiro e o último) e, a seguir, os dados relativos à compra de
gasolina e calcular :
    a) a quilometragem obtida por litro de gasolina entre cada par de paradas de reabastecimento;
    b) a quilometragem obtida por litro de gasolina em toda a viagem
    c) custo do combustível por quilometro rodado em toda a viagem*/

#include <stdio.h>

int main(void){
    struct Parada{
        int od;
        int qtdg;
        float vlg;
    };

    int n = 0;
    printf("Digite o número de paradas contando a saída e a chegada: \n");
    scanf("%d",&n);

    struct Parada p[n];

    float vlt = 0;
    int qtdgt = 0;

    for(int i = 1;i <= n; i ++){
        printf("Na parada %d, quanto estava no odômetro: \n", i);
        scanf("%d",&p[i].od);
        printf("Na parada %d, quanto foi a qtd de gasolina: \n", i);
        scanf("%d",&p[i].qtdg);
        printf("Na parada %d, quanto foi pago de gasolina: \nR$", i);
        scanf("%f", &p[i].vlg);
        vlt += p[i].vlg;
        qtdgt += p[i].qtdg;
    }


    printf("=================================\n");
    for(int i = 1;i <= n; i ++){
        printf("\n");
        printf("Na parada %d, odômetro: %d\n", i,p[i].od);
        printf("Na parada %d, qtd de gasolina: %d\n", i,p[i].qtdg);
        printf("Na parada %d, pago de gasolina: %.2f\n", i,p[i].vlg);
    }
    printf("=================================\n");

    for(int i = 1;i <= n;i++){
        int km = 0;
        km = p[i+1].od - p[i].od;

        float kml = 0;
        kml = km/p[i+1].qtdg;

        if(kml > 0){
            printf("Quilometragem obtida por litro de gasolina entre cada parada %d e %d: %.1f kms\n",i,i+1,kml);
        }
    }

    int km = 0;
    km = p[n].od - p[1].od;

    float kml = 0;
    kml = km/qtdgt;
    printf("Quilometragem obtida por litro de gasolina em toda a viagem: %.1f kms\n",kml);

    float c = 0;
    c = vlt/km;
    printf("Custo do combustível por quilometro rodado em toda a viagem: R$%.2f\n",c);

    return 0;
}
