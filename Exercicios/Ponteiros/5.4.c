#include <stdio.h>

void troca(int* p1, int* p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}
int main(void){
    int x=10,y=20;
    printf("%d %d\n",x,y);
    troca(&x,&y);
    printf("%d %d\n",x,y);
    return 0;
}
