#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a_day, a_mon, a_year;
    int e_day, e_mon, e_year;
    int fine=0;
    scanf("%d %d %d", &a_day, &a_mon, &a_year);
    scanf("%d %d %d", &e_day, &e_mon, &e_year);

    if((a_year == e_year) && (a_mon == e_mon) && (a_day<=e_day))
        fine = 0;
    else if((a_year == e_year) && (a_mon == e_mon) && (a_day > e_day))
        fine = (a_day - e_day) * 15;
    else if((a_year == e_year) && (a_mon > e_mon))
        fine = (a_mon - e_mon) * 500;
    else if(a_year > e_year)
        fine = 10000;
        
    printf("%d", fine);
        
    return 0;
}
