#include <stdio.h>

int main(){
    char hex[4];
    hex[4] = 0;
    while(scanf("%x", (unsigned int*)hex) > 0){
        printf("%s", hex);
    }
    printf("\n");
}