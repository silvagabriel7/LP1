#include <stdio.h>

int main(void){
    int seg = 00,min = 00,hr= 00;
    for(hr = 00;hr < 24;hr ++){
        printf("%d:%d:%d\n",hr,min,seg);
        for(min = 00; min < 60;min ++){
            printf("%d:%d:%d\n",hr,min,seg);
            for(seg = 00; seg < 60;seg ++){
                printf("%d:%d:%d\n",hr,min,seg);
            }    
        }
    }
    printf("%d:%d:%d\n",seg = 00,min = 00,hr= 00);
    return 0;
}
