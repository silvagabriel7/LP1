#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 1000

struct dicionario{
        struct dicionario *ant, *prox;
        char palavra[50];
        int qtd;
    };

int main(void){
    int i = 0;
    int k = 0;
    int cont = 0;
    int qtd_palavra = 1;

    char texto [DIM];

    FILE *file;
    file = fopen("./Desktop/testesc/texto.txt","r");
    if(file == NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        getchar();
        exit(0);
    }
    fgets(texto, DIM, file);
    printf("%s \n", texto);
    fclose(file);

    while(texto[cont] != '\0'){
        if(texto[cont] == ' '){
            qtd_palavra ++;
        }
        cont++;
    }
    printf("qtd de palavras: %d\n",qtd_palavra);

    struct dicionario *corr, *aux;

    corr = aux = NULL;
    corr = (struct dicionario*) malloc(sizeof(struct dicionario));
    aux = corr;
    corr->prox = corr->ant = NULL;








    while(texto[i] != ' ' && texto[i] != '\0'){
        corr->palavra[i]=texto[i];
        i++;
    }

    corr->palavra[i] = '\0';
    corr->qtd = 1;

    if(texto[i] != '\0'){
        for(int j = 1;j < qtd_palavra; j++){
            corr = (struct dicionario*)malloc(sizeof(struct dicionario));
            corr->prox = NULL;
            corr->ant = aux;
            aux->prox = corr;
            aux = corr;

            if(texto[i] == ' '){
                corr->palavra[k] = '\0';
                i ++;
                k = 0;
            }

            while(texto[i] != ' ' && texto[i] != '\0'){
                corr->palavra[k] = texto[i];
                i ++;
                k ++;
            }

            corr->qtd = 1;
            corr->palavra[k] = '\0';
        }
    }

    while (corr->ant != NULL){
        corr = corr->ant;
    }

    aux = corr;
    printf("palavra: %s \n", corr->palavra);
    printf ("quantidade: %d \n",corr->qtd);

    while (corr->prox!=NULL){
        corr = corr->prox;
        printf("palavra: %s \n", corr->palavra);
        printf ("quantidade: %d \n",corr->qtd);
        free (aux);
        aux = corr;
    }

    return 0;
    }
