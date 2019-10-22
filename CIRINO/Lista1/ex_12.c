/* Escrever um programa em C que leia um valor inteiro (limite na casa do milhar), e o imprima em forma
de caracteres, ou seja, por extenso. Ex. : 98 = noventa e oito.*/

#include <stdio.h>

int main(void){
    char u[10][15] = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    char e[9][15] = {"onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezesete", "dezoito","dezenove"};
    char d[9][15] = {"dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    char c[9][15] = {"cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};
    int n;
    int uni,dez,cent;
    printf("Digite o valor que deseja por extenso: \n");
    scanf("%d",&n);
    if(n > 99){
        if(n == 100){
            printf("cem\n");
        }else{ 
            cent = n/100;
            for(int i = 0;i < 10;i++){
                if(i == cent-1){
                    if(n % 100 == 0){
                        printf("%s\n",c[i]);
                    }else{
                        printf("%s e ",c[i]);
                    }
                }
            }
            dez = (n % 100)/10;
            for(int i = 0;i < 10;i++){
                if(i == dez-1){
                    if((n % 100)%10 == 0){
                        printf("%s\n",d[i]);
                    }else{
                        printf("%s e ",d[i]);
                    }
                }
            }
            uni = (n % 100)%10;
            for(int i = 1;i < 10;i++){
                if(i == uni){
                    printf("%s\n",u[i]);
                }
            }
        }   
    }else{
        if(9 < n && n < 100){
            dez = n / 10;
            if(n > 10 && n < 20){
                int esp = n-10;
                for(int i = 0;i < 10;i++){
                    if(i == esp-1){
                        printf("%s\n",e[i]);
                    }
                }
            }else{
                for(int i = 0;i < 10;i++){
                    if(i == dez-1){
                        if(n % 10 == 0){
                            printf("%s\n",d[i]);
                        }else{
                            printf("%s e ",d[i]);
                        }
                    }
                }
                uni = n % 10;
                for(int i = 1;i < 10;i++){
                    if(i == uni){
                        printf("%s\n",u[i]);
                    }
                }
            }
        }else{
            uni = n;
            for(int i = 0;i < 9;i++){
                if(i == uni){
                    printf("%s\n",u[i]);
                }
            }

        }
    }
    
    return 0;
}
