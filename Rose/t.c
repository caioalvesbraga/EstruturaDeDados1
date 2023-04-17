#include <stdio.h>
#include <string.h>

int main()
{
    char v[1000], sizeOfString;
    scanf("%s", v);
    
    int contador = 0;
    while(contador < strlen(v)){
        contador++;
    }

    printf("%d\n", contador);
    return 0;
}
