#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int utopianTree(int n) {
    // Complete this function
    int height = 1;
    for(int i=1; i<n+1; i++)
    {
        if (i%2 != 0)
        {
            height = height * 2;
        }
        else
        {
            height = height + 1;
        }
    }
    
    return height;
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%i", &n);
        int result = utopianTree(n);
        printf("%d\n", result);
    }
    return 0;
}
