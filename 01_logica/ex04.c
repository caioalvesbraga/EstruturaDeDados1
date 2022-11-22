#include <stdio.h>
#include <stdlib.h>

int main() {
    int times, score, i = 0, a = 0, b = 0;

    do{
        scanf("%d", &times);
        if(times == 0){
            exit(0);
        }
        
        for(i = 0; i<times; i++){
            scanf("%d", &score);
            if (score == 0){
                a++;
            }else if(score == 1){
                b++;
            }

        }
        printf("Alice ganhou %d e Beto ganhou %d\n", a, b);
        a = 0;
        b = 0;
    }while(times != 0);
    
    return 0;
}   