#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    // scanf("%d", &n);
    n = 4;
  	// Complete the code to print the pattern.
    for (i=n; i>=0; i--)
    for (i=n; i>=0; i--)
    {
        for (j=n; j>=0; j--)
            printf ("%d ",j);
        printf("\n");
    }
    return 0;
}
