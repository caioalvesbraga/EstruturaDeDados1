#include <stdio.h>
#include <string.h>

int main() {
    char letra;
    char texto[1001];
    int palavras_com_letra = 0;
    int num_palavras = 0;

    scanf("%c\n", &letra);
    fgets(texto, 1001, stdin);

    // Percorre o texto e conta o número de palavras que contêm a letra de interesse
    int len = strlen(texto);
    int i = 0;
    while (i < len) {
        // Pula os espaços em branco
        while (i < len && texto[i] == ' ') {
            i++;
        }
        // Conta uma palavra
        int j = i;
        while (j < len && texto[j] != ' ') {
            j++;
        }
        if (j > i) {
            num_palavras++;
            for (int k = i; k < j; k++) {
                if (texto[k] == letra) {
                    palavras_com_letra++;
                    break;
                }
            }
            i = j;
        }
    }

    // Calcula e imprime a porcentagem de palavras que contêm a letra de interesse
    if (num_palavras > 0) {
        float porcentagem = (float) palavras_com_letra / num_palavras * 100;
        printf("%.1f\n", porcentagem);
    } else {
        printf("0.0\n");
    }

    return 0;
}