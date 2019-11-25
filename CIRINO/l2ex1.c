#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#define DIM 106

int main(void){
    FILE *file;                     
    char frase[DIM];
    int i;
    struct dicionario{
        struct dicionario *ant, *prox;
        char palavra [80];
        int num;
    };

    struct dicionario *controle, *aux;

    file = fopen("./input.txt.txt","r"); 
    if(file == NULL)
        {
        printf("Nao foi possivel abrir o arquivo.\n");
        getchar();
        exit(0);
        }

    fgets(frase, DIM, file);
    printf("%s \n", frase);
    fclose(file);

    controle = aux = NULL;            
    controle = (struct dicionario*) malloc(sizeof(struct dicionario)); 
    aux = controle;               
    controle->prox = controle->ant = NULL;
    strcpy(controle->palavra, frase) ;
    controle->num = 1;
    fclose(file);      
    printf("%s \n", controle->palavra);
    system("pause");
    return 0;
    }
