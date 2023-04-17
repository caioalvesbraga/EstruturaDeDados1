#include <stdio.h>

int somaDigitos(long int n){
    if(n == 0) return 0;
    
    return n % 10 + somaDigitos(n / 10);
}

int main(){
    long int entrada;
    scanf("%ld", &entrada);
    int saida = somaDigitos(entrada);
    printf("%d\n", saida);
}