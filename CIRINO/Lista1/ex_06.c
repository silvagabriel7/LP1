#include <stdio.h>

int main(void){
    int pr, od, qtd;
    float vl;
    printf("Digite o número de paradas: \n");
    scanf("%d",&pr);
    for(int i = 1;i <= pr; i ++){
        int tq = 50;
        printf("Na parada %d, quanto estava no odômetro: \n", i);
        scanf("%d",&od);
        od += od;
        printf("Na parada %d, quanto foi a qtd de gasolina: \n", i);
        scanf("%d",&qtd);
        tq -= qtd; 
        printf("Na parada %d, quanto foi pago: \nR$", i);
        scanf("%f", &vl);
        vl += vl;
    }

    printf("Esse é o número final do odometro: %d\n",od);
    printf("Esse é o valor final: %f\n",vl);
    return 0;
}
