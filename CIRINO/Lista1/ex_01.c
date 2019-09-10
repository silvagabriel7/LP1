#include <stdio.h>

int main(void){
    int f = 0;
    int n = 0;
    while(f == 0){
        n += 1;
        if(n%3 == 2 && n%5 == 3 && n%7 == 4){
            f = n;
        }
    }
    printf("O número é %d",f);
    return 0;
}
