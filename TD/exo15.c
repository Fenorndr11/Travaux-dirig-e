#include <stdio.h>
#include <math.h>

int main()
{
    int S, n, i;
    printf ("Enter n:");
    scanf("%d", &n);

    printf(" The sum of 10^n is :");
    S=0;
    for (i=0; i<=n; i++)
    {
        S= S + pow ( 10, i);
    }
    printf ("S=%d", S);
    return(0);
}
