#include <stdio.h>

int main(){
    int a, b, c, resultado;
    scanf("%d %d %d", &a,&b,&c);

    if(a == b && b == c){
        printf("empate\n");
    } else if(a != b && a != c){
        printf("A\n");
    }else if(b != a && b != c){
        printf("B\n");
    } else{
        printf("C\n");
    }
}