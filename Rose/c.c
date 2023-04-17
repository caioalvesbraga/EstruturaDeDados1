#include <stdio.h>
#include <stdlib.h>

int main(){
    int originX, originY, destinyX, destinyY;
    scanf("%d %d %d %d", &originX, &originY, &destinyX, &destinyY);
    int total = abs(originX - destinyX) + abs(originY - destinyY);
    printf("%d\n",total);
}