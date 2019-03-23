#include <stdio.h>

int main(void){
    float temp;
    char temps[5];
    int i;
    float tot;
    float media;
    char cont;
    for (i=0;i<5;i++){
        printf("Digite a temperatura: ");
        scanf("%f",&temp);
        temps[i]=temp;
        tot+=temps[i];
    
    }

    media = tot/5;
    printf("Media:%f\n",media);
    for (i=0;i<5;i++){
        if (temps[i]>media){
            cont+=1;
        }
    }
    printf("Qtd acima da media: %d",cont);
    return 0;
}
