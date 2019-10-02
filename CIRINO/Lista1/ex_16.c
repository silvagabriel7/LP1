#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int j1[2];
    int j2[2];
    int d1 = 0;
    int d2 = 0;
    srand((unsigned)time(NULL));
    for(int i = 1;i < 12;i++){
        printf("RODADA %d\n",i);
        printf("\n");
        for(int j = 0 ; j < 2 ; j++){ 
            j1[j] = 1 +(rand() % 6);
            d1+=j1[j];
        }
        printf("Jogador 1:\nDado1: %d\nDado2: %d\n",j1[0],j1[1]);
        printf("\n");
        for(int j = 0 ; j < 2 ; j++){ 
            j2[j] = 1 +(rand() % 6);
            d2+=j2[j];
        }
        printf("Jogador 2:\nDado1: %d\nDado2: %d\n",j2[0],j2[1]);
        printf("\n");


        if((j1[0] == j1[1] && j2[0] != j2[1])){
            printf("JOGADOR 1 VENCEDOR\n");
        }else{
            if(j2[0] == j2[1] && j1[0] != j1[1]){
                printf("JOGADOR 2 VENCEDOR\n");
            }else{
                if(j2[0] == j2[1] && j1[0] == j1[1]){
                    if(d1 > d2){
                        printf("JOGADOR 1 VENCEDOR\n");
                    }else{
                        if(d2 > d1){
                            printf("JOGADOR 2 VENCEDOR\n");
                        }else{
                            printf("EMPATE\n");
                        }
                    }
                }else{
                    if(d1 > d2){
                        printf("JOGADOR 1 VENCEDOR\n");
                    }else{
                        if(d2 > d1){
                            printf("JOGADOR 2 VENCEDOR\n");
                        }else{
                            printf("EMPATE\n");
                        }
                    }

                }
            }
        }
        
        d1 = 0;
        d2 = 0;
        printf("==================================\n");
    }
    return 0;
}
