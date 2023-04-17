#include <stdio.h>

int main(){
    int input;
    scanf("%d", &input);

    int contador = 1;
    while(contador <= input){
        if(contador % 2 == 0){
            puts("THUMS THUMS THUMS THUMS THUMS THUMS");
        } else{
            puts("THUMS THUMS THUMS");
        }
        contador++;
    }
    
}