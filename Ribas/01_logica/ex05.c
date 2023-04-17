#include <stdio.h>

int main() {
    int n, z, j, total, inicial = 1;
    scanf("%i", &n);
    while(n != 0){
        total = 0;
        printf("Teste %d\n", inicial);
        inicial++;
        for(int i = 0; i<n; i++){
            scanf("%i %i", &j, &z);
            total += j-z;
            printf("%i\n", total);
        }
        printf("\n");
        scanf("%i", &n);
    }
    return 0;
}   