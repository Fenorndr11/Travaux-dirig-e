#include <stdio.h>

int main()
{
   int i, n, x;
   printf("Enter the list of even number to show:  ");
   scanf("%d", &n);
   for ( i=1 ; i<=n ;i++)
   {
        x=i*2;
        if (x<=n)
        {
        	printf("%d\n",x);
        }
	}
   return (0);
}
