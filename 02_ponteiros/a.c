#include <stdio.h>

int main(){
    int contaIndividual, total = 0, inputValorTotal = 0;

    while(inputValorTotal == 0){
        for(int i = 0; i<3; i++){
            scanf("%d", &contaIndividual);
            total+=contaIndividual;
        }
        scanf("%d", &inputValorTotal);
        if(inputValorTotal == total){
            puts("Acertou");
        }else{
            puts("Errou");
        }
    }
}