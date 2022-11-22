#include <stdio.h>

int main(){
    int amountOfNumbers, sumResult = 0;

    scanf("%d", &amountOfNumbers);
    for(int i = 0; i < amountOfNumbers; i++){
        int number = 0;
        scanf("%d", &number);
        sumResult+=number;
    }
    printf("%d", sumResult);
}