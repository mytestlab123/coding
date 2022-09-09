#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,c;
    // scanf("%d", &n);
    // n = 8;
    n = 4;
    c = 4;
  	// Complete the code to print the pattern.
    // printf ("\033[0;31m%d \033[0m",(n-j));
    // for (i=1; i<=n; i++)
    for (i=n; i>0; i--)
    {
        for (j=n; j>0; j--)
        // for (j=1; j<=n; j++)
        {
              // printf ("%d\033[0;31m%d \033[0m",i,j);
            if ( j > i )
              printf ("%d ", j);
            else 
              printf ("%d ", i);
        }
        printf("\n");
    }
    exit (0);
    for (i=2; i<=n; i++)
    {
        for (j=0; j<=n; j++)
        {
            if (j< (n-i)+1)
                printf ("%d ",(n-j));
                // printf ("%d ",i);
        }
        printf("\n");
    }
    exit (0);
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
