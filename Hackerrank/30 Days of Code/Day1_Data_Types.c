#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
	
	// Declare second integer, double, and String variables.
    int i1 = 0;
    double d1 = 0;

    unsigned int max_len = 8;
    unsigned int current_len = 0;
    char *s1 = (char*)malloc(sizeof(char)*max_len);
    char *sf = 0;
    current_len = max_len;

    
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &i1);
    scanf("%lf", &d1);
    
    if(s1 != NULL)
    {  
        int c = EOF;
        unsigned int i =0;
        while (( c = getchar() ) != EOF)
        {
		  s1[i++]=(char)c;

		  if(i == current_len)
		  {
            current_len = i+1;
			s1 = realloc(s1, current_len);
		  }
        }
        
	   s1[i] = '\0';  
    }   
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + i1);
    
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + d1);
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    if(s1) 
    {
      current_len = strlen(s) + strlen(s1) + 1;
      sf = (char*)malloc(sizeof(char)*current_len);
      strcat(sf,s);
      strcat(sf,++s1);
      printf("%s", sf);
      free(sf);
      free(s1);
    }    