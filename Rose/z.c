#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a estrutura Aluno, com nome e número de problemas resolvidos
typedef struct {
    char nome[21];
    int problemas_resolvidos;
} Aluno;

int comparar_alunos(const void* a, const void* b) {
    // Função auxiliar para ordenar os alunos de acordo com o número de problemas resolvidos
    const Aluno* aluno_a = (const Aluno*) a;
    const Aluno* aluno_b = (const Aluno*) b;
    
    if (aluno_a->problemas_resolvidos != aluno_b->problemas_resolvidos) {
        return aluno_b->problemas_resolvidos - aluno_a->problemas_resolvidos;
    } else {
        return strcmp(aluno_a->nome, aluno_b->nome);
    }
}

int main() {
    int n, i, j, instancia = 1;;
    Aluno* alunos;
    
    while (scanf("%d", &n) != EOF) {
        alunos = (Aluno*) malloc(n * sizeof(Aluno));
        for (i = 0; i < n; i++) {
            scanf("%s %d", alunos[i].nome, &alunos[i].problemas_resolvidos);
        }
        
        // Ordena a lista de alunos de acordo com o número de problemas resolvidos
        qsort(alunos, n, sizeof(Aluno), comparar_alunos);
        
        // Imprime a saída
        printf("Instancia %d\n", instancia++);
        printf("%s\n\n", alunos[n-1].nome);
        
        free(alunos);
    }
    
    return 0;
}
