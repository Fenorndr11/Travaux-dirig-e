#include <stdio.h>

int main()
{
    int i, n;
    printf ("Enter a list of number to show:  ");
    scanf("%d", &n);
    for ( i=1 ; i<=n; i++)
    {
        printf("%d\n",i);
    }
    return (0);
}
