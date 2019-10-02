#include <stdio.h>
#include <string.h>

int main(void){
    char frase[80] = {"Esta frase eh bonita e a frase eh bela"};
    int tam;
    int n = 0;
    tam = strlen(frase);
    char palavra[tam][80];
    int cont = 0;
    int x;

    printf("Esta frase eh bonita e a frase eh bela\n");

    for(int i = 0; i < tam; i++){
        if(frase[i] == ' '){
            x=0;
            for(int j = i-cont;j < i;j ++){
                palavra[n][x] = frase[j];
                x++;
            }
            n +=1;
            cont = 0;
        }else{

            if(frase[i+1] == '\0'){
                x=0;
                for(int k = i-cont;k < i+1;k ++){
                    palavra[n][x] = frase[k];
                    x++; 
                }
                n +=1;
            }
            cont += 1;
        }
    }
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
            printf("%s:%d\n",palavra[i],c);
        }
        c=0;
    }
    
    return 0;
}
