#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  DIM 1000

void gerar_dicionario(char t[]){
    int i = 0;
    int j;
    int k = 0;
    int qtd_palavra = 1;
    int cont = 0;
    while(t[cont] != '\0'){
        if(t[cont] == ' '){
            qtd_palavra ++;
        }
        cont++;
    }

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

void mostrar_arquivo(){
    int escolha;
    char caminho[20];
    printf("Escolha um arquivo mostrar:\n[1]TEXTO\n[2]DICIONARIO\n");
    scanf("%d",&escolha);
    if(escolha == 1){
        FILE *arq1;
        printf("Passe o caminho do arquivo desejado: \n");
        scanf("%s",caminho);
        arq1 = fopen(caminho,"r");
        if(arq1 == NULL){
            printf("Nao foi possivel abrir o arquivo.\n");
            getchar();
            exit(0);
        }
        char texto1[DIM];
        
        while(fgets(texto1, DIM, arq1) != NULL){
            printf("TEXTO\n");
            printf("*****************\n");
            printf("%s\n",texto1);
            printf("*****************\n");
        };
        
        fclose(arq1);
    }else{
        if(escolha == 2){
            FILE *arq2;
            arq2 = fopen("./dicionario.txt","r");
            if(arq2 == NULL){
                printf("Dicionario nao foi gerado ainda.\n");
                getchar();
                exit(0);
            }
            char texto2[DIM];
            printf("DICIONARIO\n");
            printf("*****************\n");
            while(fgets(texto2, DIM, arq2) != NULL){
                printf("%s\n",texto2);
            };
            printf("*****************\n");
            fclose(arq2);
        }

    }

}


int main(void){
    int escolha;
    char caminho[20];
    while(escolha != 3){
        printf("MENU\n");
        printf("===============\n");
        printf("Escolha uma opcao:\n[1]GERAR DICIONARIO\n[2]MOSTRAR TEXTO OU DICIONARIO\n[3]FECHAR PROGRAMA\n");
        scanf("%d",&escolha);
        if(escolha == 1){            
            printf("Passe o caminho do arquivo desejado: \n");
            scanf("%s",caminho);
            FILE *arq;
            arq = fopen(caminho,"r");
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
        }else{
            if(escolha == 2){
                mostrar_arquivo();
            }
        }
    }
    printf("===============\n");
    printf("PROGRAMA FINALIZADO\n");
    return 0;
    }
