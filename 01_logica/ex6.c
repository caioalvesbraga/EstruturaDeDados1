#include <stdio.h>

int main(){
    int n,contagem = 0;

    while(scanf("%d",&n) == 1){
        contagem++;
    }
    printf("%d\n", contagem);
    return 0;
}