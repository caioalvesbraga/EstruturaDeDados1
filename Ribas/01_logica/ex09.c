#include <stdio.h>

int main(){
    int numberOfRestaurants, code, score, day = 1, codeCmp = -1, scoreCmp = -1;

    while(scanf("%d", &numberOfRestaurants) != EOF){
        for(int i = 0; i<numberOfRestaurants; i++){
            scanf("%d %d", &code, &score);

            if(score>scoreCmp){
                scoreCmp = score;
                codeCmp = code;
            } else if (score == scoreCmp && code < codeCmp){
                codeCmp = code;
            }
        }
        printf("Dia %d\n%d\n\n", day, codeCmp);
        day++;
        codeCmp = -1;
        scoreCmp = -1;  
    }  
    return 0;
}