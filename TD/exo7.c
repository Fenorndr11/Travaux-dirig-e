#include <stdio.h>
int main()
{
   int x, y, z;
    printf("Enter one number:  ");
    scanf("%d", &x);
    printf("Enter an another number:  ");
    scanf("%d", &y);
    printf("Enter a last number:  ");
    scanf("%d", &z);

    if ( x>y && x>z)
    {
       printf("%d is the maximum",x);
    }
    else if (y>x && y>z )
    {
        printf ("%d is the maximum",y);
    }
    else if (z>x && z>y)
    {
        printf ("%d is the maximum",z);
    }
    return (0);
}
