#include <stdio.h>

int main(void){
    int num1,num2,i;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
     if (num1 > num2){
        for (i = num1; i > num2+1;i--){
            if (i % 2 == 0){
                    printf("%d\n",i);
            }
        }
    }
   else{
        for (i = num2; i > num1+1;i--){
            if (i%2 == 0){
                    printf("%d\n",i);
            }
        }
    }
    return 0;
}
            
        
