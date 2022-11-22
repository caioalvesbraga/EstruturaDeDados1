#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int answerYes = 0;
    int questions = 1;
    int triage = 0;
    char criterion[4];

    while(scanf(" %s", criterion) != EOF){
        if(strcmp(criterion, "sim") == 0 || strcmp(criterion, "nao") == 0){
            if (strcmp(criterion, "sim") == 0){
                answerYes++;
            }
            if (questions > 9 && answerYes >=2){
                triage++;
            }
            if(questions == 10){
                questions = 0;
                answerYes = 0;
            } 
            questions++;
        }
        
        
    }
    
    printf("%d\n", triage);
    return 0;
}