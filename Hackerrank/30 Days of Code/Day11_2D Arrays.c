#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    
    int sum=0;
    int maxSum=-64; //the min sum could be -9*7=-63
    
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++){
            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                    arr[i+1][j+1] +
                    arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(maxSum < sum)
                maxSum = sum;            
        }
    }
        
    printf("%d", maxSum);
        
    return 0;
}
