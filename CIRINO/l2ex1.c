#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  DIM 1000


int contar_palavras(char t[]){
    int cont = 0;
    int qtd = 1;
    while(t[cont] != '\0'){
        if(t[cont] == ' '){
            qtd ++;
        }
        cont++;
    }
    return qtd;
}

void gerar_dicionario(char t[]){
    int i = 0;
    int j;
    int k = 0;
    int qtd_palavra;
    qtd_palavra = contar_palavras(t);
    printf("%s\n",t);
    printf("%d\n",qtd_palavra);

    struct dicionario{
        char palavra[50];
        int qtd;
        struct dicionario *ant, *prox;
    };

    struct dicionario *corr, *aux;

    corr = aux = NULL;
    corr = (struct dicionario*) malloc(sizeof(struct dicionario));
    aux = corr;
    corr->prox = corr->ant = NULL;

    while(t[i] != ' ' && t[i] != '\0'){
        corr->palavra[i]=t[i];
        i++;
    }

    corr->palavra[i] = '\0';
    corr->qtd = 1;
    
    if(t[i] != '\0'){
        for(int j = 1;j < qtd_palavra; j++){
            corr = (struct dicionario*)malloc(sizeof(struct dicionario));
            corr->prox = NULL;
            corr->ant = aux;
            aux->prox = corr;
            aux = corr;
            aux->qtd = 0;
    
            if(t[i] == ' '){
                i ++;
                k = 0;
            }

            while(t[i] != ' ' && t[i] != '\0'){
                corr->palavra[k] = t[i];
                i ++;
                k ++;
            }

            corr->palavra[k] = '\0';
            k = 0;

           while (corr->ant != NULL){
              corr = corr->ant;
            }
            while (corr->prox!=NULL){
              if(strcmp(corr->palavra,aux->palavra)==0){
                corr->qtd += 1;
                aux = aux->ant;
                corr = aux->prox;
                free(corr);
                aux->prox = NULL;
                break;
              }else{
              corr = corr->prox;
              }
            }
            if(aux->qtd == 0){
              aux->qtd = 1;
            }
            
        }
    }
    corr=aux;

    while (corr->ant != NULL){
        corr = corr->ant;
    }
    aux = corr;

    FILE *arq;
    arq = fopen("./dicionario.txt","w");
    fprintf(arq,"%s: %d\n",corr->palavra,corr->qtd);
    while (corr->prox!=NULL){
        corr = corr->prox;
        fprintf(arq,"%s: %d\n",corr->palavra,corr->qtd);
        free (aux);
        aux = corr;
    }
    free(aux);
    fclose(arq);
}


int main(void){
    FILE *arq;
    arq = fopen("./texto.txt","r");
    if(arq == NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        getchar();
        exit(0);
    }
    char texto[DIM];
    while(fgets(texto, DIM, arq) != NULL){
        gerar_dicionario(texto);
    };
    fclose(arq);
    return 0;
    }
