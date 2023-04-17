#include <stdio.h>

int main(){
    double a, g, rendA, rendG, custoTotalA, custoTotalG;
    scanf("%lf %lf %lf %lf",&a, &g, &rendA, &rendG);

    custoTotalA = a/rendA;
    custoTotalG = g/rendG;

    if(custoTotalG <= custoTotalA){
        puts("G");
    } else{
        puts("A");
    }




}