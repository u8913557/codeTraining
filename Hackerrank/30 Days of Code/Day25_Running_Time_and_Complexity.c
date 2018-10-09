#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num = 0;

    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        int input, j;
        scanf("%d", &input);
        
        if(input == 1)
            printf("Not prime\n");
        else
        {
            for(j=2; j<=sqrt(input); j++)
            {
                if(input%j==0)
                    break;      
            }

            if(j<=sqrt(input))
                printf("Not prime\n");
            else
                printf("Prime\n");
        }
    }
    return 0;
}
