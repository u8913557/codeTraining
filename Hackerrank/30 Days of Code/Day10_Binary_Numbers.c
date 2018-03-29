#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned int n; 
    int contOne=0;
    int maxcontOne=0;
    
    scanf("%d",&n);
    while(n>0){
            if(n%2==1){
                contOne += 1;               
            }
            else{
                contOne=0;
            }
            if(maxcontOne < contOne)
                maxcontOne = contOne;
            n = n/2; 
    }
    
    printf("%d", maxcontOne);
    
    return 0;
}
