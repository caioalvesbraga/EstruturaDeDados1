#include <stdio.h>
#include <string.h>

#define MAX_AEROPORTOS 10000

int main() {
    int a, v, i, x, y, max_trafego, aeroporto;
    int trafego[MAX_AEROPORTOS+1];
    int teste = 1;

    while(1) {
        scanf("%d %d", &a, &v);
        if(a == 0 && v == 0) {
            break;
        }

        memset(trafego, 0, sizeof(trafego));
        max_trafego = 0;

        for(i = 0; i < v; i++) {
            scanf("%d %d", &x, &y);
            trafego[x]++;
            trafego[y]++;
        }

        for(i = 1; i <= a; i++) {
            if(trafego[i] > max_trafego) {
                max_trafego = trafego[i];
                aeroporto = i;
            }
        }

        printf("Teste %d\n", teste++);
        for(i = 1; i <= a; i++) {
            if(trafego[i] == max_trafego) {
                printf("%d ", i);
            }
        }
        printf("\n\n");
    }

    return 0;
}
