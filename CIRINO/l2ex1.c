#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 1000

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

            if(t[i] == ' '){
                i ++;
                k = 0;
            }

            while(t[i] != ' ' && t[i] != '\0'){
                corr->palavra[k] = t[i];
                i ++;
                k ++;
            }

            corr->qtd = 1;
            corr->palavra[k] = '\0';
            k = 0;
        }
    }



    while (corr->ant != NULL){
        corr = corr->ant;
    }

    aux = corr;
    printf("palavra: %s \n", corr->palavra);
    printf ("quantidade: %d \n",corr->qtd);

    FILE *arq;
    arq = fopen("./dicionario.txt","w");
    
    

    while (corr->prox!=NULL){
        corr = corr->prox;
        fwrite(corr, sizeof(struct dicionario),1,arq);
        free (aux);
        aux = corr;
    }
    fclose(arq);
    
}





int main(void){
    char texto[DIM];
    FILE *arq;
    arq = fopen("./texto.txt","r");
    if(arq == NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        getchar();
        exit(0);
    }
    fgets(texto, DIM, arq);
    printf("%s \n", texto);
    fclose(arq);


    gerar_dicionario(texto);
    return 0;
    }


