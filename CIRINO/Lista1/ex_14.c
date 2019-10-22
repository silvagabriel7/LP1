/*Faça um programa em C que simule um cronômetro com horas, minutos e segundos. A simulação
deverá mostrar no vídeo o cronômetro no seguinte formato HH: MM: SS. Inicialmente o cronômetro será

zerado ( 00: 00: 00 ), sendo que os segundos começarão a ser incrementados, depois os minutos e
depois as horas. Lembre-se que a cada 60 segundos os minutos deverão ser incrementados, depois os
minutos voltarão a zero. Quando as horas estiverem prestes a chegar em 25, o cronômetro deverá
voltar a zero ( 00: 00: 00 ).*/

#include <stdio.h>

int main(void){
    int seg = 00,min = 00,hr= 00;
    for(hr = 00;hr < 24;hr ++){
        for(min = 00; min < 60;min ++){
            for(seg = 00; seg < 60;seg ++){
                printf("%d:%d:%d\n",hr,min,seg);
            }    
        }
    }
    
    printf("%d:%d:%d\n",seg = 00,min = 00,hr= 00);
    return 0;
}
