#include <stdio.h>

int f91(int n){
    if(n == 0) return 0;

    if(n >= 101) return n - 10;
    if(n <= 101) return f91(f91(n+11));
}

int main(){
    int number;
    scanf("%d", &number);
    while(number){
        printf("f91(%d) = %d\n", number, f91(number));
        scanf("%d", &number);
    }
}