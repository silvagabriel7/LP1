#include <stdio.h> 
#include <string.h>


int strlen2 (char* str){
    return strlen(str);
}


int main (void){
    char str[] = "";
    printf("Digite a frase: \n");
    scanf("%s",&str);
    printf("Qtd de caracteres: %d",strlen2(str));
  return 0;
}
