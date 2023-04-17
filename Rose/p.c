#include <stdio.h>

int main() {
    int n, i, j = 0, k = 0;
    scanf("%d", &n);
    int vetor[n], pares[n], impares[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) {
            pares[j] = i;
            j++;
        } else {
            impares[k] = i;
            k++;
        }
    }

    for(i = 0; i < j; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    for(i = 0; i < k; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}