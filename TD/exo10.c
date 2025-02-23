#include <stdio.h>

int main()
{
 int i, n, x ;
 printf (" Enter a number:  ");
 scanf("%d", &n);

 printf("The divisors of this number are:\n");
 for ( i=1 ; i<=n ; i++)
    {
        x=n/i;
        if (n%i==0)
        {
            printf("%d\n", x);
        }
    }
return (0);
}
