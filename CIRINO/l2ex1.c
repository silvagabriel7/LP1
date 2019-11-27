#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DIM 1000


void lista_de_palavras(){

    char t[100];
    FILE *arq;
    arq = fopen("./Desktop/testesc/texto.txt","r");
    if(arq == NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        getchar();
        exit(0);
    }
    fgets(t, DIM, arq);
    fclose(arq);

    int tam;
    int n = 0;
    tam = strlen(t);
    char palavra[DIM][50];
    int cont = 0;
    int x;

    for(int i = 0; i < tam; i++){
        if(t[i] == ' '){
            x=0;
            for(int j = i-cont;j < i;j ++){
                palavra[n][x] = t[j];
                x++;
            }
            n +=1;
            cont = 0;
        }else{

            if(t[i+1] == '\0'){
                x=0;
                for(int k = i-cont;k < i+1;k ++){
                    palavra[n][x] = t[k];
                    x++; 
                }
                n +=1;
            }
            cont += 1;
        }
    }

    FILE *file;
    file = fopen("./Desktop/testesc/aux.txt","w");
    int c=0;
    for(int i = 0;i < n;i++){
        c+=1;
        for(int j = i+1;j < n;j++){
            if(strcmp(palavra[i],palavra[j])==0){
                c+=1;
                strcpy(palavra[j], " ");
            }
        }
        if(strcmp(palavra[i]," ")!=0){
            fprintf(file,"%s:%d",palavra[i],c);
        }
        c=0;
    }
    fclose(file);
}

void gerar_dicionario(char t[]){
    int i = 0;
    int j;
    int k = 0;
    int c;

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

    for(int i=0;i < strlen(t);i++){
        corr = (struct dicionario*)malloc(sizeof(struct dicionario));
        corr->prox = NULL;
        corr->ant = aux;
        aux->prox = corr;
        aux = corr;
        while(t[i] != ':'){
            corr->palavra[i]=t[i];
        }
        corr->palavra[i] = '\0';
        i+=2;
        corr->qtd = t[i];
    }
    while (corr->ant != NULL){
        corr = corr->ant;
    }

    FILE *arq;
    arq = fopen("./Desktop/testesc/dicionario.txt","w");
    while (corr->prox!=NULL){
        corr = corr->prox;
        fprintf(arq,"%s: %d\n",corr->palavra,corr->qtd);
        free (aux);
        aux = corr;
    }
    fclose(arq);
    
}

int main(void){
    lista_de_palavras();
    char texto[1000];
    FILE *arq;
    arq = fopen("./Desktop/testesc/aux.txt","r");
    if(arq == NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        getchar();
        exit(0);
    }
    fgets(texto, DIM, arq);
    fclose(arq);
    gerar_dicionario(texto);
    return 0;
}





#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  DIM 1000


int contar_palavras(char t[]){
    int cont = 0;
    int qtd = 0;
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

    FILE *arq;
    arq = fopen("./Desktop/testesc/dicionario.txt","w");
    while (corr->prox!=NULL){
        corr = corr->prox;
        fprintf(arq,"%s: %d\n",corr->palavra,corr->qtd);
        free (aux);
        aux = corr;
    }
    aux = corr;
    fclose(arq);
}


int main(void){
    FILE *arq;
    arq = fopen("./Desktop/testesc/texto.txt","r");
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
