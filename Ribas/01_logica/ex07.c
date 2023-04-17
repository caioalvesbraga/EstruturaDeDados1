#include <stdio.h>
#include <string.h>

int main(){
    char string[30];
    int a = 0;
    while(scanf( "%s", string) != EOF){
        if(strcmp(string, "marte") == 0){
            a++;
        }
    }
    if(a > 0){
        printf("Leonardo Cicero Marciano\n");
    }else{
        printf("none\n");
    }
    return 0;
}