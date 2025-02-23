#include <stdio.h>

int main ()
{
	float S, n, i;

	printf("Enter n: ");
	scanf("%f", &n);

	printf("The sum of 1/n is: ");
    S=0;
    for (i=1 ; i<=n ; i++)
        {
            S = S + 1/i ;
        }

    printf("S = %.3f", S);

	return (0);
}
