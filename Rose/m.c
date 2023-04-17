#include <stdio.h>

int main(){
    int n, a, b, lowerIndex = 0, v[10000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    for(int j = 1; j < n; j++){
        if(v[j] < v[lowerIndex]){
            lowerIndex = j;
        }
    }
    printf("%d\n", lowerIndex);

}