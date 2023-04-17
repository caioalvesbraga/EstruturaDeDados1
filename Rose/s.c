#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int produtividade[n][m], total = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &produtividade[i][j]);
        }
    }

    // Encontra a linha com a maior soma de produtividades
    int maior_linha = 0, soma_maior_linha = 0;
    for (int i = 0; i < n; i++) {
        int soma_linha = 0;
        for (int j = 0; j < m; j++) {
            soma_linha += produtividade[i][j];
        }
        if (soma_linha > soma_maior_linha) {
            soma_maior_linha = soma_linha;
            maior_linha = i;
        }
    }

    // Encontra a coluna com a maior soma de produtividades
    int maior_coluna = 0, soma_maior_coluna = 0;
    for (int j = 0; j < m; j++) {
        int soma_coluna = 0;
        for (int i = 0; i < n; i++) {
            soma_coluna += produtividade[i][j];
        }
        if (soma_coluna > soma_maior_coluna) {
            soma_maior_coluna = soma_coluna;
            maior_coluna = j;
        }
    }

    // Compara as maiores somas e colhe a linha ou coluna com maior produtividade
    if (soma_maior_linha >= soma_maior_coluna) {
        for (int j = 0; j < m; j++) {
            total += produtividade[maior_linha][j];
        }
    } else {
        for (int i = 0; i < n; i++) {
            total += produtividade[i][maior_coluna];
        }
    }

    printf("%d\n", total);

    return 0;
}
