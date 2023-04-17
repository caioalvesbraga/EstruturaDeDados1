#include <stdio.h>

int main() {
    int teste = 1, n, a1 = 0, a2 = 0, b1, b2;

    while(scanf("%d", &n) && n){
        printf("Teste %d\n", teste++);
        a1 = 0;
        a2 = 0;
        for(int count = 1; count <= n; count++){
            scanf("%d %d", &b1, &b2);
            a1 += b1;
            a2 += b2;
        }
        if(a1 > a2){
            puts("Aldo");
        } else if(a2 > a1){
            puts("Beto");
        }
        printf("\n\n");
    }
}