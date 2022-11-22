
int main(){
    int contaIndividual,qtdDePessoas, total = 0, inputValorTotal = 0;

    while(inputValorTotal == 0){
        scanf("%d", &qtdDePessoas);
        for(int i = 0; i<qtdDePessoas; i++){
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