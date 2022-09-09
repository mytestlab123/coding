#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Output
// ❯ gcc pattern2.c; ./a.out
// 8
// 8 7
// 8 7 6
// 8 7 6 5
// 8 7 6 5 4
// 8 7 6 5 4 3
// 8 7 6 5 4 3 2
// 8 7 6 5 4 3 2 1
// 8 7 6 5 4 3 2
// 8 7 6 5 4 3
// 8 7 6 5 4
// 8 7 6 5
// 8 7 6
// 8 7
// 8

int main() 
{

    int n,i,j,m;
    // scanf("%d", &n);
    n = 8;
    // n = 4;
  	// Complete the code to print the pattern.
    for (i=1; i<=n; i++)
    {
        // for (j=n; j>=0; j--)
        for (j=0; j<=n; j++)
        {
            // if (j< (n-i)+1)
            if ( j < i )
                printf ("%d ",(n-j));
            // if ( j <  (n-i) )
            //     printf ("%d ",((n+1)-i));
            // if ( j <  (n-i) )
            //     printf ("%d ",((n+1)-i));
            // if ( j < i )
            //     printf ("%d ",(n-j));
        }
        printf("\n");
    }
    // exit (0);
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
