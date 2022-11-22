#include <stdio.h>

int faz_conta_direito(int parcelas, char op){

  int valores,soma;

    scanf("%d", &soma);
    if(op == '+'){
      while(--parcelas){
        scanf("%d", &valores);
        soma+=valores;
      }
    }else if(op == '-'){
      while(--parcelas){
        scanf("%d", &valores);
        soma-=valores;
      } 
    }
  return soma;
}