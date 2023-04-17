#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int T, N, pontos, ox = 0, soma, cont = 0, full;
    char Pais[10];

    int jogo(){
        if(ox == 0){
            scanf("%d", &T);
            if(T == 0){
                exit(0);
            }
            scanf("%d", &N);
            full = 3 * N;
        }
        ox = 1;
        scanf("%s %d", Pais, &pontos);
        full -= pontos;
        cont++;
        if(cont < T){
            jogo();
        }
        printf("%d\n", full);
        ox = 0;
        cont = 0;
        full = 0;
        jogo();

    }
    jogo();

}









