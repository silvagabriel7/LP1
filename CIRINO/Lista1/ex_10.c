#include <stdio.h>
#include <string.h>

int main(void){
    char frase[80] = {"Esta kkk"};
    int tam;
    int n = 0;
    char palavra[n][80];
    int cont = 0;
    tam = strlen(frase);
    

    for(int i = 0;i < tam;i ++){
        if(frase[i] == ' '){
            for(int j = i-cont;j < i;j ++){
                palavra[n][j] = frase[j];
                printf("%c\n",palavra[n][j]); 
            }
            n +=1;
            cont = 0;
        }else{
            if(frase[i+1] == '\0'){
                for(int k = i-cont;k < i+1;k ++){
                    palavra[n][k] = frase[k];
                    printf("%c\n",palavra[n][k]); 
                }
                n +=1;
                cont += 1;
            }else{
                cont += 1;
            }
        }
    }
    for(int i = 0;i < n;i++){
        printf("%s\n",palavra[i]);
    }
    return 0;
}
