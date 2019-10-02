#include <stdio.h>
#include <string.h>

int main(void){
    int cont = 0;
    char vet[80] = {"caracol"};
    int total = strlen(vet);
    for(int i = 0;i < total;i++){
        for(int j = i+1; j < total;j++){
            if(vet[i] == vet[j]){
                vet[i] = 0;
            }
        }
    }
    for(int i = 0;i < total;i++){
        if(vet[i] != 0){
            cont += 1;
        }
    }
    printf("%d\n",cont);
    
    return 0;
}
