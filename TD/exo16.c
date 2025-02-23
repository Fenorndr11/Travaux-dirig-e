#include <stdio.h>
#include <math.h>

int main ()
{
	int fact,i ,n ,S ;

	printf("  ****Calcul de somme de factoriel allant de 1 à n****\n");
	printf(" Entrez un chiffre :");
	scanf("%d",&n);

	S=0;
	fact=1;

    for (i=1 ; i<=n ; i++)
    {
    
	fact = fact*i;
	S = S + fact ;	
    }
 
    printf("S = %d", S);


	return 0;

}
