#include <stdio.h>

#define MAXL 1000
#define MAXC 11

char matriz[MAXL][MAXC];
void initiateMatriz(int L);
void printmatriz(int L);
void setTree(char G_lado, int G_linha);
char changeLumberjack(char Lado_lenhador, int L);
int breakTree(char Lado_lenhador, int L);
void attmatriz(char Lado_lenhador, int L);
void setLumberjack(char Lado_lenhador);

int main(int argc, char const *argv[]){

    int L, G, G_linha, i=0, quebrado=0 ;
    char comands[2000], G_lado, Lado_lenhador;

    scanf("%d", &L);
    getchar();

    initiateMatriz(L);

    scanf("%d", &G);
    getchar();

    for(int i = 0 ; i < G ; i++){

        scanf("%c %d", &G_lado, &G_linha);
        getchar();

        setTree(G_lado,G_linha);

    }

    scanf("%c", &Lado_lenhador);
    getchar();

    setLumberjack(Lado_lenhador);

    printmatriz(L);

    scanf("%s", comands);

    while(comands[i]!='\0'){

        if(comands[i] == 'T') Lado_lenhador = changeLumberjack(Lado_lenhador, L);

        if( comands[i] == 'B' ) quebrado = breakTree(Lado_lenhador, L);

        if(quebrado == 1 ){

            printf("*morreu*\n");
            return 0;

        }

        i++;

    }


    return 0;
}

//---------------------------------------

void initiateMatriz(int L){

    for(int i = 0 ; i < MAXL ; i++){

        for(int j = 0 ; j < MAXC ; j++){

            if( j >= 4 && j <=6 && i >= MAXL - L) matriz[i][j] = '|';

            else matriz[i][j] = ' ';

        }

    }

}

void printmatriz(int L){

    printf("~~~~~\n");

    for(int i = MAXL - 5  ; i < MAXL ; i++){

        for(int j = 0 ; j < MAXC ; j++){

            printf("%c", matriz[i][j]);

        }

        printf("\n");

    }

    printf("~~~~~\n");

}

void setTree (char G_lado, int G_linha) {

    if ( G_lado == 'D'){

        matriz[MAXL-G_linha][8] = '-';
        matriz[MAXL-G_linha][9] = '-';
        matriz[MAXL-G_linha][10] = '-';

    } else if ( G_lado == 'E' ){

        matriz[MAXL-G_linha][0] = '-';
        matriz[MAXL-G_linha][1] = '-';
        matriz[MAXL-G_linha][2] = '-';

    }

}

void setLumberjack(char Lado_lenhador){

    if ( Lado_lenhador == 'D' ) {

        matriz[MAXL-2][8] = 'L';
        matriz[MAXL-1][8] = 'L';

    } else if ( Lado_lenhador == 'E' ) {

        matriz[MAXL-2][2] = 'L';
        matriz[MAXL-1][2] = 'L';

    }

}

char changeLumberjack(char Lado_lenhador, int L){

        if( Lado_lenhador == 'D'){

            if( matriz[MAXL-2][2] == '-' || matriz[MAXL-1][2] == '-' ){

                printf("*beep*\n");
                return Lado_lenhador;

            } else {

                matriz[MAXL-2][2] = 'L';
                matriz[MAXL-1][2] = 'L';
                matriz[MAXL-1][8] = ' ';
                matriz[MAXL-2][8] = ' ';
                Lado_lenhador = 'E';
                printmatriz(L);
                return Lado_lenhador;

            }

        } else if( Lado_lenhador == 'E'){

            if( matriz[MAXL-2][8] == '-' || matriz[MAXL-1][8] == '-' ){

                printf("*beep*\n");
                return Lado_lenhador;

            } else {

                matriz[MAXL-2][8] = 'L';
                matriz[MAXL-1][8] = 'L';
                matriz[MAXL-1][2] = ' ';
                matriz[MAXL-2][2] = ' ';
                Lado_lenhador = 'D';
                printmatriz(L);
                return Lado_lenhador;

            }
        }

}

int breakTree(char Lado_lenhador, int L){

        if(Lado_lenhador == 'D' && matriz[MAXL-1][6] == '|') matriz[MAXL-1][6] = '<';

        else if(Lado_lenhador == 'E' && matriz[MAXL-1][4] == '|') matriz[MAXL-1][4] = '>';

        else if(Lado_lenhador == 'D' && matriz[MAXL-1][6] == ' ') return 0;

        else if(Lado_lenhador == 'E' && matriz[MAXL-1][4] == ' ') return 0;

        else if(Lado_lenhador == 'D' && matriz[MAXL-1][6] == '<' && matriz[MAXL-3][10]!='-') attmatriz(Lado_lenhador, L);

        else if(Lado_lenhador == 'E' && matriz[MAXL-1][4] == '>' && matriz[MAXL-3][1]!='-') attmatriz(Lado_lenhador, L);

        else return 1;

        printmatriz(L);

    return 0;

}

void attmatriz(char Lado_lenhador, int L){

    for(int i = MAXL ; i > MAXL - L -1; i--) {

        for(int j = 0 ; j < MAXC ; j++){

            matriz[i][j] = matriz[i-1][j];


        }

    }

    setLumberjack(Lado_lenhador);

}