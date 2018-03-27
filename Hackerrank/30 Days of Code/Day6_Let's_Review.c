#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char  strInput[50000]={0};
    unsigned int n =0;    
    
    scanf("%d", &n);    
    //printf("%d\n", n);
    
    for(int i=0; i<n; i++)
    { 
        scanf("%s", strInput);            
        int strLen = strlen(strInput);
            
        for(int j=0; j<strLen; j=j+2)
            printf("%c", strInput[j]);
                
        printf(" ");
                
        for(int k=1; k<strLen; k=k+2)
            printf("%c", strInput[k]);
        
        printf("\n");
            
    } 
        
    return 0;
}