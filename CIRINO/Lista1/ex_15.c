/*O Departamento de trânsito do estado anotou dados de acidentes de trânsito no último ano. Para cada
motorista envolvido no acidente, tem-se as seguintes informações:
    - Ano de nascimento;
    - Sexo (M - Masculino, F - Feminino)
    - Procedência ( 0 - Capital, 1 - Interior, 2 - Outro estado);
Faça um programa em C que :
    a) Calcule a porcentagem de motoristas com menos de 21 anos;
    b) Calcule quantas mulheres são da capital;
    c) Calcule quantos motoristas do interior do estado tem idade maior que 60 anos;
    d) Verifique se existe alguma mulher com idade maior que 60 anos;*/

#include <stdio.h>
#include <string.h>

struct Dados {
    int ano_de_nasc;
    char sexo[1];
    int proc;
};

void preenche(struct Dados* p){
    printf("Digite o ano de nascimento: \n");
    scanf("%d",&p->ano_de_nasc);
    printf("Digite o sexo: F ou M \n");
    scanf("%s",p->sexo);
    printf("Digite a procedência\n0-Capital\n1-Interior\n2-Outro Estado: \n");
    scanf("%d",&p->proc);
}


int main(void){
    int n;
    printf("Digite as quantidades de motoristas: \n");
    scanf("%d",&n);
    struct Dados motoristas[n];
    for(int i = 0;i < n; i ++){
        preenche(&motoristas[i]);
    }
    int cont21 = 0;
    int mc = 0;
    int i60 = 0;
    int m60 = 0;
    for(int i = 0;i < n; i ++){
        if(motoristas[i].ano_de_nasc > 1998){
            cont21+=1;
        }
        if(strcmp(motoristas[i].sexo,"F")==0  && motoristas[i].proc == 0){
            mc+=1;
        }
        if(motoristas[i].proc == 1 && motoristas[i].ano_de_nasc > 1959 ){
            i60+=1;
        }
        if(strcmp(motoristas[i].sexo,"F")==0 && motoristas[i].ano_de_nasc > 1959 ){
            m60 = 1;
        }
    }
    printf("Porcentagem de motoristas com menos de 21 anos: %d%%\n",cont21*100/n);
    printf("Mulheres são da capital: %d\n",mc);
    printf("Motoristas do interior do estado com idade maior que 60 anos: %d\n",i60);
    if(m60 == 1){
        printf("Sim existe alguma mulher com idade maior que 60 anos\n");
    }else{
        printf("Não existe alguma mulher com idade maior que 60 anos\n");
    }
    
    return 0;
}
