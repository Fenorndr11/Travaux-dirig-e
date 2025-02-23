#include <stdio.h>
#include <math.h>

int main ()
{
	int reponse ,temp,x,fact;

	printf("  ****Calcul factoriel****\n");
	printf(" Entrez un chiffre :");
	scanf("%d",&x);

	reponse =1;
	fact=x;

	while(x>=1)
	{
		temp=x;
		x-=1;
		reponse =reponse *temp;
    }
	printf("%d!=%d\n",fact,reponse );
	return 0;

}
