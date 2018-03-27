#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    double totalCost = 0;
    float tip = 0;
    float tax = 0;
    
    double meal_cost;    
    scanf("%lf", &meal_cost);
    int tip_percent; 
    scanf("%i", &tip_percent);
    int tax_percent; 
    scanf("%i", &tax_percent);
    
    totalCost = meal_cost*(1+0.01*(tip_percent+tax_percent));
    
    printf("The total meal cost is %d dollars.", (int)round(totalCost));
    return 0;
}