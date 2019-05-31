#include <stdio.h>
#include <string.h>



int main(void){
	int i ,tam;
	char string[100];
	printf("Digite o string: \n");
	scanf("%s",string);
	tam = strlen(string);
	printf("%d\n",tam);
	FILE* f = fopen("/home/ime/teste_v2.txt", "w");
	for(i=0;i<tam;i++){
		fputc(string[i],f);
	}	
	fclose(f);
	return 0;

}
