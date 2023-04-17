#include <stdio.h>

int main(){
    int costPerKm, tollDistance, tollFee, totalCost, totalDistance;
    scanf("%d %d %d %d", &totalDistance, &tollDistance, &costPerKm, &tollFee);
    int numberOftolls = totalDistance/tollDistance;
    totalCost = totalDistance*costPerKm + tollFee*numberOftolls;
    printf("%d\n", totalCost);

}