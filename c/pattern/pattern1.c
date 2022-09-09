#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,m;
    // scanf("%d", &n);
    n = 4;
  	// Complete the code to print the pattern.
    for (i=n; i>=0; i--)
    // for (i=1; i<=n; i++)
    {
        for (j=n; j>=0; j--)
        // for (j=1; j<=n; j++)
        {
            if (i<j)
                printf ("%d ",j);
                // printf ("%d ",i);
        }
        printf("\n");
    }
    // printf("\n");
    for (i=2; i<=n; i++)
    {
        for (j=n; j>=0; j--)
        // for (j=1; j<=n; j++)
        {
            if (i<=j)
                printf ("%d ",j);
                // printf ("%d ",i);
        }
        printf("\n");
    }
    exit (0);
    // printf("\n");
    // printf("\n");
    for (i=n; i>=0; i--)
    // for (i=1; i<=n; i++)
    {
        for (j=n+1; j>=1; j--)
        // for (j=1; j<=n; j++)
        {
            if (j<i)
                printf ("%d ",j);
                // printf ("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
