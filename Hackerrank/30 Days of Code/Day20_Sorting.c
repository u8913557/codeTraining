#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    // Write Your Code Here
    int maxSwapNumber = 0;
    int temp = 0;
    int i,j=0;
    for(i=0; i<n; i++){
        int swapNumber = 0;
        for(j=0; j<n-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swapNumber++;
                maxSwapNumber++;
            }           
        }
        if(swapNumber==0)
            break;
    }
    
    printf("Array is sorted in %d swaps.\n", maxSwapNumber);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[n-1]);
        
    return 0;
}