#include <stdio.h>

int main()
{
    int n, v[10000], x;
    int contains = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d", &x);
    for(int j = 0; j < n; j++){
        if(x == v[j]){
           contains = 1;
        }
    }

    if(contains){
        puts("pertence");
    } else{
         puts("nao pertence");
    }
    return 0;
}
