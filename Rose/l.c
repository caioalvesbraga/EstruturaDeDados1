#include <stdio.h>

int main() {
    int m, teste = 1;
    while (scanf("%d", &m) && m) {
        printf("Teste %d\n", teste++);
        char operation;
        int x, result;
        scanf("%d", &result);
        for (int i = 1; i < m; i++) {
            scanf(" %c %d", &operation, &x);
            if (operation == '+') {
                result += x;
            } else {
                result -= x;
            }
        }
        printf("%d\n", result);
    }
    return 0;
}
