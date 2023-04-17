#include <stdio.h>

int main() {
    int numLectures, capacity, in = 0, out = 0, auxIn, auxOut, danger = 0;
    scanf("%d %d", &numLectures, &capacity);

    for(int count = 0; count < numLectures; count++){
        scanf("%d %d", &auxOut, &auxIn);
        in -= auxOut;
        in += auxIn;
        if(in > capacity){
            danger++;
        }
    }
    if(danger > 0){
        puts("S");
    } else{
        puts("N");
    }
}