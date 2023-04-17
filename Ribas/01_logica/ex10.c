#include <stdio.h>

void desenhaArvore(char matriz[][11], int altura)
{
  printf("~~~~~~~~~~~\n");
  for (int i = altura + 4; i >= altura; i--){
    for (int j = 0; j < 11; j++){
      if (matriz[i][j] == 0){
        printf(" ");
      }
      else{
        printf("%c", matriz[i][j]);
      }
    }
    printf("\n");
  }
  printf("~~~~~~~~~~~\n");
}

int main()
{
  int totalInputs, totalGalhos, sentido = 0, altura = 0;
  char matriz[3000][11], sentidoInicial, movimentos;

  scanf("%i", &totalInputs);
  for (int i = 0; i < totalInputs; i++){
    for (int j = 4; j < 7; j++){
      matriz[i][j] = '|';
    }
  }

  scanf("%i", &totalGalhos);
  for (int i = 0; i < totalGalhos; i++){
    char lado;
    int linha;
    scanf(" %c %i", &lado, &linha);

    int positionGalho = linha - 1;
    if (lado == 'D'){
      matriz[positionGalho][7] = '-';
      matriz[positionGalho][8] = '-';
      matriz[positionGalho][9] = '-';
    }
    else{
      matriz[positionGalho][1] = '-';
      matriz[positionGalho][2] = '-';
      matriz[positionGalho][3] = '-';
    }
  }

  scanf(" %c", &sentidoInicial);
  if (sentidoInicial == 'D'){
    sentido = 1;
    matriz[0][8] = 'L';
    matriz[1][8] = 'L';
  }
  else{
    sentido = -1;
    matriz[0][2] = 'L';
    matriz[1][2] = 'L';
  }


  desenhaArvore(matriz, altura);
  scanf("%c", &movimentos);
  while (scanf("%c", &movimentos) > 0){
    int zonaPerigo = 5 - sentido * 3;
    int zonaAtual = 5 + sentido * 3;

    if (movimentos == 'T'){
      if(matriz[altura+1][zonaPerigo] == '-' || matriz[altura][zonaPerigo]) {
        printf("**beep**\n");
        continue;
      }

      matriz[altura][zonaPerigo] = 'L';
      matriz[altura + 1][zonaPerigo] = 'L';
      matriz[altura][zonaAtual] = '\0';
      matriz[altura + 1][zonaAtual] = '\0';

      sentido *= -1;
    }
    else if(movimentos == 'B'){
      int sinal = 5 + sentido;
      char sinalQuebra = matriz[altura][sinal];
      if (sinalQuebra == 61 - sentido)
      {
        altura++;
        if(matriz[altura+1][zonaAtual] == '-') {
          printf("**morreu**\n");
          return 0;
        }

        matriz[altura+1][zonaAtual] = 'L';
      }
      else{
        matriz[altura][sinal] = 61 - sentido;
      }
    } else {
      continue;
    }

    desenhaArvore(matriz, altura);
  }
  printf("\n");
  return 0;
}